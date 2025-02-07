#include <iostream>
#include <cmath>

using namespace std;

int PhanTu(int, int, int);
int Tong(int, int, int);

int main(){
	int a0, q, n;
	do{
		cout << "Nhap gia tri a0: ";
		cin >> a0;
		cout << "Nhap cong boi: ";
		cin >> q;
		cout << "Nhap so phan tu: ";
		cin >> n;
	}while(n<=0);
	cout << "\nPhan tu thu " << n << " la: " << PhanTu(a0,q,(n-1)) << "\n";
	cout << "Tong la: " << Tong(a0,q,(n-1));
	return 0;
}

int PhanTu(int a0, int q, int n){
	if(n==0)
		return a0;
	else
		return PhanTu(a0,q,n-1)*q;
}

int Tong(int a0, int q, int n){
	if(n==0)
		return a0;
	else
		return PhanTu(a0,q,n) + Tong(a0,q,n-1);
}
