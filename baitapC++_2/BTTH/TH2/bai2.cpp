#include <iostream>
#define MAX 100

using namespace std;

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
void swap(int *a, int *b);
void sap_xep(int *a, int length);

int main(){
	int *A = new int[MAX];
	int n;
	NhapMang(A,n);

	cout << "Mang truoc khi sap xep: ";
	XuatMang(A,n);
	sap_xep(A,n);
	cout << "Mang sau khi sap xep: ";
	XuatMang(A,n);
	
	delete [] A;
	return 0;
}

void NhapMang(int a[], int &n){
	do{
		cout << "Nhap gia tri so n = ";
		cin >> n;
	}while(n<=0);
	for(int i=0; i<n; i++){
		cout << "Nhap gia tri phan tu thu " << i << " = ";
		cin >> a[i];
	}
}

void XuatMang(int a[], int n){
	for(int i=0; i<n; i++){
		if(i==n-1)
			cout << a[i];
		else
			cout << a[i] << ", ";
	}
	cout << "\n";
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sap_xep(int *a, int length){
	for(int i=0; i<length-1; i++){
		int max_index = i;
		for(int j=i+1; j<length; j++){
			if(a[j]>a[max_index]) max_index = j;
		}
		swap(&a[i],&a[max_index]);
	}
}
