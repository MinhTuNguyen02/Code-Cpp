#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

void NhapMang(int [], int &);
void XuatMang(int [], int);
int LaMangDoiXung(int [], int);

int main(){
	int A[MAX], N;
	NhapMang(A,N);
	if(LaMangDoiXung(A,N)==1)
		cout << "Day la mang doi xung";
	else
		cout << "Day khong phai la mang doi xung";
	return 0;
}

void NhapMang(int a[], int &n){
	do{
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
	}while(n<=0);
	for(int i=0; i<n; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}

int LaMangDoiXung(int a[], int n){
	for(int i=0 ; i<n/2; i++){
		if(a[i]==a[n-1-i])
			return 1;
	}
	return 0;
}
