#include <iostream>
#include <cmath>

using namespace std;

double GiaiPTBac1(double, double);

int main(){
	double a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	GiaiPTBac1(a,b);
	return 0;
}

double GiaiPTBac1(double a, double b){
	double x;
	if(a==0){
		if(b==0)
			cout << "Phuong trinh co vo so nghiem";
		else
			cout << "Phuong trinh vo nghiem";
	}
	else{
		x = -b/a;
		cout << "Nghiem cua phuong trinh la: x = " << x;
	}
}
