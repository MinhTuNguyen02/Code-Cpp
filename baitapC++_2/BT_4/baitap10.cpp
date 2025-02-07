#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

void NhapMang(int [], int &);
void XuatMang(int [], int);
void XuatChan(int [], int);
void XuatVTChan(int [], int);
void ThanhLe(int [], int);

int main(){
	int A[MAX], N;
	NhapMang(A,N);
	cout << "Cac so chan trong mang: ";
	XuatChan(A,N);
	cout << "\nCac vi tri chan trong mang: ";
	XuatVTChan(A,N);
	cout << "\nThanh mang le: ";
	ThanhLe(A,N);
	XuatMang(A,N);
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

void XuatChan(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]%2==0)
			cout << a[i] << " ";
	}
	cout << "\n";
}

void XuatVTChan(int a[], int n){
	for(int i=0; i<n; i++){
		if(i%2==0)
			cout << a[i] << " ";
	}
	cout << "\n";
}

void ThanhLe(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]%2==0)
			a[i]++;
	}
}
