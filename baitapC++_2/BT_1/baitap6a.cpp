#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double BanKinh, DienTich, ChuVi;
	const double pi = 3.14;
	cout << "Nhap ban kinh hinh tron: ";
	cin >> BanKinh;
	
	DienTich = pi*pow(BanKinh,2);
	ChuVi = 2*pi*BanKinh;
	
	cout << "Dien tich hinh tron la: " << DienTich << "\n";
	cout << "Chu vi hinh tron la: " << ChuVi;
	return 0;
}
