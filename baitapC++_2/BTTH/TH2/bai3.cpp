#include <iostream>
#include <ctime>
#include <cstdlib>
#define MAX 1000

using namespace std;

void XuatMang(int *a, int n);
void XoaSoAm(int *a, int &n);
void swap(int *a, int *b);
void sap_xep(int *a, int length);
void ChenX(int *a, int &n, int x);

int main(){
	int *a = new int[MAX];
	int n = 10;
	
	srand(time(NULL));
	for(int i=0; i<n; i++){
		a[i] = (rand() - rand()) % 100;
	}
	cout << "Mang ngau nhien ban dau:\n";
	XuatMang(a,n);
	
	XoaSoAm(a,n);
	cout << "Mang sau khi xoa so am:\n";
	XuatMang(a,n);
	
	sap_xep(a,n);
	cout << "Mang sau khi sap xep:\n";
	XuatMang(a,n);
	
	int x;
	do{
		cout << "Nhap x>0: ";
		cin >> x;
	}while(x<=0);
	ChenX(a,n,x);
	XuatMang(a,n);
	
	delete [] a;
	return 0;
}

void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout << "a[" << i << "]: " << a[i] << "\n";
	}
}

void XoaSoAm(int *a, int &n){
	int i = 0, j = n-1;
	while(i<=j){
		if(a[i]<=0){
			while(a[j]<=0 && j>i){
				j--;
			}
			if(j>i){
				a[i] = a[j];
			}
			if(a[i]<0 && a[j]<0) break;
			j--;
		}
		i++;
	}
	n=i;
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

void ChenX(int *a, int &n, int x){
	int i=0;
	while(a[i]>x && i<n){
		i++;
	}
	for(int j=n; j>i; j--){
		a[j] = a[j-1];
	}
	a[i] = x;
	n++;
}
