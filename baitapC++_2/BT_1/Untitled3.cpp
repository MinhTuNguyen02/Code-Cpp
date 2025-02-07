#include <dos.h>
#include <stdio.h>
#include <conio.h>

#define SECTOR_SIZE 512  
#define ENTRY_SIZE 32   

void readBootSector(int drive, unsigned short *bytesPerSector, unsigned short *reservedSectors, 
                    unsigned char *numFATs, unsigned short *sectorsPerFAT, unsigned short *rootEntries) {
    unsigned char buffer[SECTOR_SIZE];
    union REGS regs;
    struct SREGS sregs;

    regs.h.ah = 0x25;   
    regs.h.al = 1;      
    regs.h.ch = 0;     
    regs.h.cl = 1;      
    regs.h.dh = 0;      
    regs.h.dl = drive;  

    sregs.es = FP_SEG(buffer);
    regs.x.bx = FP_OFF(buffer);

    int86x(0x13, &regs, &regs, &sregs);  

    if (regs.h.ah != 0) {
        printf("L?i khi d?c Boot Sector! Mã l?i: %d\n", regs.h.ah);
        return;
    }

    *bytesPerSector = buffer[0x0B] | (buffer[0x0C] << 8);
    *reservedSectors = buffer[0x0E] | (buffer[0x0F] << 8);
    *numFATs = buffer[0x10];
    *rootEntries = buffer[0x11] | (buffer[0x12] << 8);
    *sectorsPerFAT = buffer[0x16] | (buffer[0x17] << 8);
}

void readRootDirectory(int drive, unsigned short rootStartSector, unsigned short rootEntries, unsigned short bytesPerSector) {
    unsigned char buffer[SECTOR_SIZE];
    union REGS regs;
    struct SREGS sregs;

    unsigned short numRootSectors = (rootEntries * ENTRY_SIZE) / bytesPerSector;

    for (unsigned short sector = 0; sector < numRootSectors; sector++) {
        regs.h.ah = 0x25;   
        regs.h.al = 1;      
        regs.h.ch = rootStartSector >> 8; 
        regs.h.cl = (rootStartSector & 0xFF) + sector + 1; 
        regs.h.dh = 0;     
        regs.h.dl = drive;  

        sregs.es = FP_SEG(buffer);
        regs.x.bx = FP_OFF(buffer);

        int86x(0x13, &regs, &regs, &sregs); 
        
        if (regs.h.ah != 0) {
            printf("L?i khi d?c thu m?c g?c! Mã l?i: %d\n", regs.h.ah);
            return;
        }

        for (int i = 0; i < bytesPerSector / ENTRY_SIZE; i++) {
            unsigned char *entry = buffer + (i * ENTRY_SIZE);

            if (entry[0] == 0x00) break; 
            if (entry[0] == 0xE5) continue; 

            char name[9], ext[4];
            snprintf(name, 9, "%.8s", entry);
            snprintf(ext, 4, "%.3s", entry + 8);

            unsigned short cluster = entry[0x14] | (entry[0x15] << 8);
            unsigned short date = entry[0x16] | (entry[0x17] << 8);
            unsigned short time = entry[0x18] | (entry[0x19] << 8);
            unsigned long size = entry[0x1C] | (entry[0x1D] << 8) | (entry[0x1E] << 16) | (entry[0x1F] << 24);
           
            printf("File: %s.%s\n", name, ext);
            printf("  Cluster d?u tiên: %u\n", cluster); 
            printf("  Kích thu?c: %lu bytes\n", size);
            printf("  Ngày: %04d-%02d-%02d\n", 1980 + ((date >> 9) & 0x7F), (date >> 5) & 0x0F, date & 0x1F);
            printf("  Gi?: %02d:%02d:%02d\n\n", (time >> 11) & 0x1F, (time >> 5) & 0x3F, (time & 0x1F) * 2);
        }
    }
}

int main() {
    unsigned short bytesPerSector, reservedSectors, sectorsPerFAT, rootEntries;
    unsigned char numFATs;
    int drive = 0x80;  


    readBootSector(drive, &bytesPerSector, &reservedSectors, &numFATs, &sectorsPerFAT, &rootEntries);

    unsigned short rootStartSector = reservedSectors + (numFATs * sectorsPerFAT);

    readRootDirectory(drive, rootStartSector, rootEntries, bytesPerSector);

    getch();
    return 0;
}

