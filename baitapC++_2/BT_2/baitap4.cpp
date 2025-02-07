#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, x;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	
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
	return 0;
}
