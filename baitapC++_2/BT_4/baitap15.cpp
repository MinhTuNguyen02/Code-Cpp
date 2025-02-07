#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

void NhapMang(int [], int &);
void XuatMang(int [], int);
void swap(int *, int *);
void SelectionSort(int [], int );

int main(){
	int A[MAX], N;
	NhapMang(A,N);
	cout << "Mang vua nhap la: ";
	XuatMang(A,N);
	SelectionSort(A,N);
	cout << "Mang sau khi sap xep: ";
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

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort(int a[], int n){
	int min_idx;
	for(int i=0; i<n-1; i++){
		min_idx = i;
		for(int j=i+1; j<n; j++){
			if(a[j]<a[min_idx])
				min_idx = j;
		}
		swap(&a[min_idx],&a[i]);
	}
}
