#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double DienTich, BanKinh;
	const double pi = 3.14;
	cout << "Nhap dien tich hinh tron: ";
	cin >> DienTich;
	
	BanKinh = sqrt(DienTich/pi);
	cout << "Ban kinh cua hinh tron la: " << BanKinh;
	return 0;
}
