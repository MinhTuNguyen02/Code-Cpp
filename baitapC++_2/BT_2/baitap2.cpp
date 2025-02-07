#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x1, x2, y1, y2;
	cout << "Nhap toa do diem dau(x1,y1):\n";
	cin >> x1 >> y1;
	cout << "Nhap toa do diem cuoi(x2,y2):\n";
	cin >> x2 >> y2;
	
	if((x1!=x2) || (y1!=y2)){
		double xi, yi, DoDai;
		xi = (x1+x2)/2;
		yi = (y1+y2)/2;
		DoDai = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
		cout << "Toa do trung diem cua doan thang la: I(" << xi << "," << yi << ")\n";
		cout << "Do dai doan thang la: " << DoDai;
	}
	else
		cout << "Toa do khong phu hop";
	return 0;
}
