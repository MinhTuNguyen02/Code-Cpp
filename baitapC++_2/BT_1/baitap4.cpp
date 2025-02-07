#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double Toan, Van, Ly, Hoa, Sinh, Anh, Tb;
	cout << "Nhap diem Toan: ";
	cin >> Toan;
	cout << "Nhap diem Van: ";
	cin >> Van;
	cout << "Nhap diem Ly: ";
	cin >> Ly;
	cout << "Nhap diem Hoa: ";
	cin >> Hoa;
	cout << "Nhap diem Sinh: ";
	cin >> Sinh;
	cout << "Nhap diem Anh: ";
	cin >> Anh;
	
	Tb = (Toan*3 + Van*2 + Ly*2 + Hoa + Sinh + Anh*2)/11;
	cout << "Diem trung binh cuoi nam cua sinh vien la: " << Tb;
	return 0;
}
