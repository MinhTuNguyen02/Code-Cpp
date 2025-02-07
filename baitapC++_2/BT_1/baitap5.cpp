#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, Tong, Hieu, Tich, Thuong, Tb;
	cout << "Nhap so thuc a: ";
	cin >> a;
	cout << "Nhap so thuc b: ";
	cin >> b;
	
	Tong = a + b;
	Hieu = a - b;
	Tich = a*b;
	if(b!=0)
		Thuong = a/b;
	Tb = (a+b)/2;
	
	cout << "Tong = " << Tong << "\n";
	cout << "Hieu = " << Hieu << "\n";
	cout << "Tich = " << Tich << "\n";
	if(b!=0)
		cout << "Thuong = " << Thuong << "\n";
	cout << "Gia tri trung binh = " << Tb << "\n";
	return 0;
}
