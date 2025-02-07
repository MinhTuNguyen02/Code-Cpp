#include <iostream>
#include <cmath>

using namespace std;

int USCLN(int, int);

int main(){
	int tu, mau;
	cout << "Nhap tu so: ";
	cin >> tu;
	cout << "Nhap mau so: ";
	cin >> mau;
	
	int ucln = USCLN(abs(tu),abs(mau));
	tu /= ucln;
	mau /= ucln;
	cout << "Phan so toi gian la: " << tu << "/" << mau;
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
