#include <dos.h>
#include <stdio.h>
#include <conio.h>

#define SECTOR_SIZE 512

void ReadBootSector(int drive, unsigned short *reservedSector, unsigned short *BytePerSector){
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
		printf("ma loi: &d",regs.h.ah);
	}
	
	*reservedSector = (buffer[0x0E]) | (buffer[0x0F] << 8);
	*BytePerSector = (buffer[0x0B]) | (buffer[0x0C] << 8);
}

void readFat(int drive, unsigned short fatStartSector, unsigned short BytePerSector){
	unsigned char buffer[SECTOR_SIZE];
	union REGS regs;
	struct SREGS sregs;
	
	regs.h.ah = 0x25;
	regs.h.al = 1;
	regs.h.ch = fatStartSector >> 8;
	regs.h.cl = (fatStartSector & 0xFF) +1;
	regs.h.dh = 0;
	regs.h.dl = drive;
	
	sregs.es = FP_SEG(buffer);
	regs.x.bx = FP_OFF(buffer);
	
	int86x(0x13,&regs,&regs,&sregs);
	
	if(regs.h.ah!=0){
		printf();
		return;
	}
	
	for(int i=0; i<100; i++){
		unsigned char fatEntry = (buffer[i*2]) | (buffer[i*2+1] << 8);
		printf("&d,&04X\n",i,fatEntry);
	}
}

int main(){
	unsigned short BytePerSector, reservedSector;
	int drive = 0x80;
	
	ReadBootSector(drive,&reservedSector,&BytePerSector);
	readFat(drive,reservedSector,BytePerSector);
}
