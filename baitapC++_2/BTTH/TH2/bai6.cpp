#include <iostream>

using namespace std;

void nhap(int **a, int n);
int tong_cheo(int **a, int n);

int main(){
	int n;
	do{
		cout << "Nhap gia tri so n = ";
		cin >> n;
	}while(n<=0);
	
	int **arr = new int*[n];
	cout << "Khoi tao mang a:\n";
	nhap(arr,n); 
	cout << "Tong cac phan tu co tren duong cheo chinh: " << tong_cheo(arr,n);
	
	for(int i=0; i<n; i++){
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}

void nhap(int **a, int n){
	for(int i=0; i<n; i++){
		a[i] = new int[n];
		for(int j=0; j<n; j++){
			cout << "nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

int tong_cheo(int **a, int n){
	int tong=0;
	for(int i=0; i<n; i++){
		tong += a[i][i];
	}
	return tong;
}
