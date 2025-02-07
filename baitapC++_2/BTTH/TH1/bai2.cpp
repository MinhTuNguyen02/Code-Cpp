#include <iostream>

using namespace std;

int tong_le (int a[], int length);

int main(){
	const int n = 10;
	int a[n];
	
	for(int i=0; i<n; i++){
		cout << "Nhap gia tri phan tu thu " << i << " = ";
		cin >> a[i];
	}
	cout << "Tong cac so le co trong mang tren: " << tong_le(a,n);
	return 0;
}

int tong_le (int a[], int length){
	int tong=0;
	for(int i=0; i<length; i++){
		if(a[i]&1)
			tong += a[i];
	}
	return tong;
}
