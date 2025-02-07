#include <iostream>
#include <cmath>

using namespace std;

int MinValue(int, int, int, int);

int main(){
	int a, b, c, d;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	cout << "Nhap d: ";
	cin >> d;
	cout << "Gia tri nho nhat la: " << MinValue(a, b, c, d);
	return 0;
}

int MinValue(int a, int b, int c, int d){
	int min = a;
	if(b<min) min = b;
	if(c<min) min = c;
	if(d<min) min = d;
	return min;
}
