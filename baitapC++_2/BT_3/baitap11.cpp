#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int SoSV;
	double Diem, Tong=0, TB;
	do{
		cout << "Nhap so sinh vien: ";
		cin >> SoSV;
	}while(SoSV<=0);
	
	for(int i=1; i<=SoSV; i++){
		do{
			cout << "Nhap diem sinh vien thu " << i << ": ";
			cin >> Diem;
		}while((Diem<0) || (Diem>10));
		Tong += Diem;
	}
	TB = Tong/SoSV;
	cout << "Diem trung binh cua tat ca sinh vien la: " << TB;
	return 0;
}
