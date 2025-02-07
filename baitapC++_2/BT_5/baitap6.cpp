#include <iostream>
#include <cmath>
#define MAXD 100
#define MAXC 100

using namespace std;

void NhapMT(int[][MAXC], int M, int N);
void XuatMT(int[][MAXC], int, int);
void Tich2MT(int[][MAXC], int[][MAXC], int, int, int);

int main(){
	int a[MAXD][MAXC], b[MAXD][MAXC], m, n, p;
	do{
		cout << "Nhap m: ";
		cin >> m;
		cout << "Nhap n: ";
		cin >> n;
		cout << "Nhap p: ";
		cin >> p;
	}while((m<=0) || (n<=0) || (p<=0));
	
	cout << "\nNhap ma tran a:\n";
	NhapMT(a,m,n);
	cout << "\nNhap ma tran b:\n";
	NhapMT(b,n,p);
	cout << "\nTich cua 2 ma tran la:\n";
	Tich2MT(a,b,m,n,p);
	return 0;
}

void NhapMT(int A[][MAXC], int M, int N){
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

void Tich2MT(int A[][MAXC], int B[][MAXC], int M, int N, int P){
	int C[MAXD][MAXC];
	for(int i=0; i<M; i++){
		for(int k=0; k<P; k++){
			for(int j=0; j<N; j++){
				C[i][k] += A[i][j]*B[j][k];
			}
		}
	}
	XuatMT(C,N,P);
}
