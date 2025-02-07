#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c, x, x1, x2;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	
	if(a==0){
		if(b==0){
			if(c==0)
				cout << "Phuong trinh co vo so nghiem";
			else
				cout << "Phuong trinh vo nghiem";
		}
		else{
			x = -c/b;
			cout << "Phuong trinh co 1 nghiem: x = " << x;
		}
	}
	else{
		double delta = pow(b,2) - 4*a*c;
		if(delta<0)
			cout << "Phuong trinh vo nghiem";
		else if(delta==0){
			x1 = x2 = -b/(2*a);
			cout << "Phuong trinh co nghiem kep: x1 = x2 = " << x1;
		}
		else{
			x1 = (-b+sqrt(delta))/(2*a);
			x2 = (-b-sqrt(delta))/(2*a);
			cout << "Phuong trinh co 2 nghiem phan biet: x1 = " << x1 << "; x2 = " << x2; 
		}
	}
	return 0;
}
