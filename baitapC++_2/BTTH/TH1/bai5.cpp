#include <iostream>

using namespace std;

void NhapMang(int[], int);
void XuatMang(int[], int);
void swap(int*, int*);
void SapXepTangDan(int[], int);

int main(){
	const int n = 10;
	int A[n];
	NhapMang(A,n);

	cout << "Mang truoc khi sap xep: ";
	XuatMang(A,n);
	SapXepTangDan(A,n);
	cout << "Mang sau khi sap xep: ";
	XuatMang(A,n);
	return 0;
}

void NhapMang(int A[], int n){
	for(int i=0; i<n; i++){
		cout << "Nhap gia tri phan tu thu " << i << " = ";
		cin >> A[i];
	}
}

void XuatMang(int A[], int n){
	for(int i=0; i<n; i++){
		if(i==n-1)
			cout << A[i];
		else
			cout << A[i] << ", ";
	}
	cout << "\n";
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SapXepTangDan(int A[], int n){
	for(int i=0; i<n-1; i++){
		int min_index = i;
		for(int j=i+1; j<n; j++){
			if(A[j]<A[min_index]) min_index = j;
		}
		swap(&A[i],&A[min_index]);
	}
}
