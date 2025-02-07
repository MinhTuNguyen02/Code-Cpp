#include <iostream>

using namespace std;

void DayTangDan(int, int, int, int);

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
	DayTangDan(a,b,c,d);
	return 0;
}


void DayTangDan(int a, int b, int c, int d){
	if(a>b) swap(a, b);
	if(a>c) swap(a, c);
	if(a>d) swap(a, d);
	if(b>c) swap(b, c);
	if(b>d) swap(b, d);
	if(c>d) swap(c, d);
	cout << a << " " << b << " " << c << " " << d;
}
