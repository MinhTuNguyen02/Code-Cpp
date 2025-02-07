#include <iostream>
#include <cmath>

using namespace std;

void HoanVi(int &, int &);

int main(){
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Truoc Hoan Vi\n";
	cout << "a = " << a << "\nb = " << b;
	HoanVi(a, b);
	cout << "\nSau Hoan Vi\n";
	cout << "a = " << a << "\nb = " << b;
	return 0;
}

void HoanVi(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
