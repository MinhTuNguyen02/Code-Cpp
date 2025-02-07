#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double SoKW;
	int DonGia;
	do{
		cout << "Nhap so KW dien tieu thu: ";
		cin >> SoKW;
	}while(SoKW<0);
	
	if(SoKW<=100) DonGia = 2000;
	else if(SoKW<=200) DonGia = 2500;
	else if(SoKW<=300) DonGia = 3000;
	else DonGia = 5000;
	
	double Tien = SoKW*DonGia;
	cout << "Tien dien: " << Tien << " dong";
	return 0;
}
