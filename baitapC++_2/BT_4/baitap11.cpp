#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

void NhapMang(int [], int &);
void XuatMang(int [], int);
int timNhoNhat(int [], int);
double TrungBinh(int [], int);
int TimKiem(int [], int, int);

int main(){
	int A[MAX], N;
	NhapMang(A,N);
	cout << "Gia tri nho nhat cua mang la: " << timNhoNhat(A,N) << "\n";
	cout << "Gia tri trung binh cua cac phan tu trong mang la: " << TrungBinh(A,N) << "\n";
	int k;
	cout << "Nhap k can tim: ";
	cin >> k;
	if(TimKiem(A,N,k)==-1) cout << "Khong tim thay " << k << " trong mang A";
	else cout <<"Tim duoc " << k << " o vi tri a[" << TimKiem(A,N,k) << "]";
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

int timNhoNhat(int a[], int n){
	int min=a[0];
	for(int i=1; i<n; i++){
		if(a[i]<min) min = a[i];
	}
	return min;
}

double TrungBinh(int a[], int n){
	int tong=0;
	for(int i=0; i<n; i++){
		tong += a[i];
	}
	
	return tong/double(n);
}

int TimKiem(int a[], int n, int k){
	for(int i=0; i<n; i++){
		if(a[i]==k)
			return i;
	}
	return -1;
}
