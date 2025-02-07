#include <iostream>
#include <cmath>
#define MAXD 100
#define MAXC 100

using namespace std;

void NhapMT(int[][MAXC], int M, int N);
void XuatMT(int[][MAXC], int, int);
void Tong2MT(int[][MAXC], int[][MAXC], int, int);
void Hieu2MT(int[][MAXC], int[][MAXC], int, int);

int main(){
	int a[MAXD][MAXC], b[MAXD][MAXC], m, n;
	do{
		cout << "Nhap m: ";
		cin >> m;
		cout << "Nhap n: ";
		cin >> n;
	}while((m<=0) || (n<=0));
	
	if(m==n){
		cout << "\nNhap ma tran a:\n";
		NhapMT(a,m,n);
	
		cout << "\nNhap ma tran b:\n";
		NhapMT(b,m,n);
	
		Tong2MT(a,b,m,n);
		Hieu2MT(a,b,m,n);
	}
	else cout << "khong the cong, tru 2 ma tran khac cap";
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

void Tong2MT(int A[][MAXC], int B[][MAXC], int M, int N){
	int c[MAXD][MAXC];
	for(int i=0; i<M; i++){
		for(int j=0 ; j<N; j++){
			c[i][j] = A[i][j] + B[i][j];
		}
	}
	cout << "Tong 2 ma tran la:\n";
	XuatMT(c,M,N);
}
void Hieu2MT(int A[][MAXC], int B[][MAXC], int M, int N){
	int c[MAXD][MAXC];
	for(int i=0; i<M; i++){
		for(int j=0 ; j<N; j++){
			c[i][j] = A[i][j] - B[i][j];
		}
	}
	cout << "Hieu 2 ma tran la:\n";
	XuatMT(c,M,N);
}
