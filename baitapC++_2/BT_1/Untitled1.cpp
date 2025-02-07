#include <dos.h>
#include <stdio.h>
#include <conio.h>

#define SECTOR_SIZE 512

void ReadBootSecter(int drive){
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
	
	int86x(0x13,&regs,&regs,&sregs);
	
	if(regs.h.ah!=0){
		printf("ma loi &d",regs.h.ah);
		return;
	}
	
	unsigned short BytePerSector = (buffer[0x0B]) | (buffer[0x0C] << 8);
	unsigned char SectorPerCluster = (buffer[0x0D]);
	unsigned short reservedSector = (buffer[0x0E]) | (buffer[0x0F] << 8);
	unsigned char numFats = (buffer[0x10]);
	unsigned short rootSector = (buffer[0x11]) | (buffer[0x12] << 8);
	unsigned short SectorPerFat = (buffer[0x16]) | (buffer[0x17] << 8);
	
	printf("Byte Per Sector: &d",BytePerSector);
}

int main(){
	int drive = 0x80;
	ReadBootSecter(drive);
	return 0;
}
