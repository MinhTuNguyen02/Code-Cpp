#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define MAX 100

using namespace std;

void XuatMang(int *, int);
int BinarySearch(int *, int, int);
void swap(int *a, int *b);
void sap_xep(int *a, int length);

int main(){
	int *a = new int[MAX];
	int n = 20;
	int T;
	srand(time(NULL));
	for(int i=0; i<n; i++){
		a[i] = rand()%100;
	}
	sap_xep(a,n);
	XuatMang(a,n);
	
	cout << "Nhap gia tri so T can tim: ";
	cin >> T;
	int kq = BinarySearch(a,n,T);
	if(kq!=-1)
		cout << T << " o vi tri A[" << kq << "]";
	else
		cout << "Khong tim thay " << T;
	
	delete [] a;
	return 0;
}

void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout << "a[" << i << "]: " << a[i] << "\n";
	}
}

int BinarySearch(int *a, int n, int T){
	int L=0, R=n-1, m;
	while(true){
		if(L>R)
			return -1;
		m = floor((L+R)/2);
		if(a[m]>T)
			R = m-1;
		else if(a[m]<T)
			L = m+1;
		else
			return m;
	}
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sap_xep(int *a, int length){
	for(int i=0; i<length-1; i++){
		int min_index = i;
		for(int j=i+1; j<length; j++){
			if(a[j]<a[min_index]) min_index = j;
		}
		swap(&a[i],&a[min_index]);
	}
}
