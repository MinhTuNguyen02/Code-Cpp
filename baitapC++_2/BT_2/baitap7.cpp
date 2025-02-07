#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double Luong, HeSo, TNCT;
	const int LCB = 650000;
	do{
		cout << "Nhap tham nien cong tac: ";
		cin >> TNCT;	
	}while(TNCT<=0);
	
	if(TNCT<12) HeSo = 1.92;
	else if(TNCT<36) HeSo = 2.34;
	else if(TNCT<60) HeSo = 3;
	else HeSo = 4.5;
	
	Luong = LCB*HeSo;
	cout << "Luong cua nhan vien la: " << Luong;
	return 0;
}
