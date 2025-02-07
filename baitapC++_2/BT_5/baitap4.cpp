#include <iostream>
#include <cmath>
#define MAXD 100
#define MAXC 100

using namespace std;

int main(){
	int A[MAXD][MAXC], M, N;
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
	cout << "\n";
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\nMa tran chuyen vi:\n";
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cout << A[j][i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
