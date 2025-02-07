#include <iostream>
#include <cmath>
#define MAXC 100

using namespace std;

void NhapMT(double[][MAXC], int&);
void XuatMT(double[][MAXC], int);
double DetMT(double A[][MAXC], int N);
void MTNghichDao(double[][MAXC], int, double);

int main(){
	double A[MAXC][MAXC];
	int N;
	NhapMT(A,N);
	double D = DetMT(A,N);
	if(D==0)
		cout << "Ma tran khong kha nghich";
	else{
		MTNghichDao(A,N,D);
	}
	return 0;
}

void NhapMT(double A[][MAXC], int &N){
	do{
		cout << "Nhap kich thuoc cua ma tran vuong: ";
		cin >> N;
	}while(N<=0);
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << "Nhap phan tu thu [" << i << "][" << j << "]: ";
			cin >> A[i][j]; 
		}
	}
}

void XuatMT(int A[][MAXC], int N){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}

double DetMT(double A[][MAXC], int N){
	int i, j, k;
	double C[MAXC][MAXC];
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			C[i][j] = A[i][j];
		}
	}
    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){
            double coef = C[j][i] / C[i][i];
            for(int k=i; k<N; k++) {
                C[j][k] = C[j][k] - coef * C[i][k];
            }
        }
    }
    
    double d=1;
    for(i=0; i<N; i++){
    	for(int j=0; j<N; j++){
    		if(i==j)
    			d *= C[i][j];
		}
	}
	return d;
}

void MTNghichDao(double A[][MAXC], int N, double D){
	double tmp=1/D;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			A[i][j] *= tmp;
		}
	}
	for(int j=0; j<N; j++){
		for(int i=0; i<N; i++){
			cout << A[j][i] << " ";
		}
		cout << "\n";
	}
}
