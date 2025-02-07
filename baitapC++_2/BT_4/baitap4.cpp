#include <iostream>

using namespace std;

int USCLN(int, int);

int main(){
	int a, b;
	do{
		cout << "Nhap a: ";
		cin >> a;
		cout << "Nhap b: ";
		cin >> b;
	}while(a*b<0);
	cout << "USCLN(" << a << "," << b << ")= " << USCLN(a,b);
	return 0;
}

int USCLN(int a, int b){
	while(a*b!=0){
		if(a>b)
			a %= b;
		else
			b %= a;
	}
	return a+b;
}
