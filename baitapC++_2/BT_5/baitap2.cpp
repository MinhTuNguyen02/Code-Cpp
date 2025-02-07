#include <iostream>
#include <cmath>
#define MAXD 100
#define MAXC 100

using namespace std;

void NhapMT(int[][MAXC], int&, int&);
void XuatMT(int[][MAXC], int, int);
void TongHang(int[][MAXC], int, int);
void TongCot(int[][MAXC], int, int);

int main(){
	int a[MAXD][MAXC], m, n;
	NhapMT(a,m,n);
	cout << "\n";
	XuatMT(a,m,n);
	TongHang(a,m,n);
	cout << "\n";
	TongCot(a,m,n);
	return 0;
}

void NhapMT(int A[][MAXC], int &M, int &N){
	do{
		cout << "Nhap M: ";
		cin >> M;
		cout << "Nhap N: ";
		cin >> N;
	}while((M<=0) || (N<=0));
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			cout << "Nhap phan tu [" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}
	}
}

void XuatMT(int A[][MAXC], int M, int N){
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}

void TongHang(int A[][MAXC], int M, int N){
	for(int i=0; i<M; i++){
		int tong=0;
		for(int j=0; j<N; j++){
			tong+=A[i][j];
		}
		cout << "\nTong hang " << i << " la: " << tong;
	}
}

void TongCot(int A[][MAXC], int M, int N){
	for(int j=0; j<N; j++){
		int tong=0;
		for(int i=0; i<M; i++){
			tong+=A[i][j];
		}
		cout << "\nTong cot " << j << " la: " << tong;
	}
}
