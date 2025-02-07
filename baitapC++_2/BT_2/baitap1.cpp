#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c, ChuVi, DienTich;
	cout << "Nhap canh a: ";
	cin >> a;
	cout << "Nhap canh b: ";
	cin >> b;
	cout << "Nhap canh c: ";
	cin >> c;
	
	if((a+b>c) && (a+c>b) && (b+c>a)){
		ChuVi = a+b+c;
		double p = ChuVi/2;
		DienTich = sqrt(p*(p-a)*(p-b)*(p-c));
		cout << "Dien tich tam giac la: " << DienTich << "\n";
		cout << "Chu vi tam giac la: " << ChuVi;
	}
	else
		cout << "a, b, c khong the la 3 canh cua mot tam giac";
	return 0;
}
