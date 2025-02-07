#include <iostream>
#include <cmath>

using namespace std;
int a0=0, a1=1;

int PhanTu(int, int, int);
int Tong(int, int, int);


int main(){
	int p, q, n;
	do{
		cout << "Nhap so phan tu: ";
		cin >> n;
		cout << "Nhap p: ";
		cin >> p;
		cout << "Nhap q: ";
		cin >> q;
	}while(n<0);
	cout << "Phan tu thu " << n << " la: " << PhanTu(p,q,n-1) << "\n";
	cout << "Tong la: " << Tong(p,q,n-1);
	return 0;
}

int PhanTu(int p, int q, int n){
	if(n==0)
		return a0;
	else if(n==1)
		return a1;
	else return p*PhanTu(p,q,n-1) + q*PhanTu(p,q,n-2);
}

int Tong(int p, int q, int n){
	if(n==0)
		return a0;
	else if(n==1)
		return a1;
	else
		return PhanTu(p,q,n) + Tong(p,q,n-1);
}
