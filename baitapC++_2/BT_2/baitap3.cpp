#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x1, x2, x3, y1, y2, y3;
	double AB, BC, AC;
	cout << "Nhap toa do dinh A:\n";
	cin >> x1 >> y1;
	cout << "Nhap toa do dinh B:\n";
	cin >> x2 >> y2;
	cout << "Nhap toa do dinh C:\n";
	cin >> x3 >> y3;
	
	AB = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	BC = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
	AC = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
//	cout << AB << " " << BC << " " << AC;
	if((AB+BC>AC) && (AB+AC>BC) && (AC+BC>AB)){
		double xg, yg, ChuVi, p, DienTich;
		xg = (x1+x2+x3)/3;
		yg = (y1+y2+y3)/3;
		ChuVi = AB + BC + AC;
		p = ChuVi/2;
		DienTich = sqrt(p*(p-AB)*(p-BC)*(p-AC));
		cout << "Toa do trong tam cua tam giac la: G(" << xg << "," << yg << ")\n";
		cout << "Dien tich tam giac la: " << DienTich << "\n";
		cout << "Chu vi tam giac la: " << ChuVi;
	}
	else
		cout << "Day khong phai toa do 3 dinh cua mot tam giac";
	return 0;
}
