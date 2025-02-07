#include <iostream>
#include <cmath>
#define MAXD 100
#define MAXC 100

using namespace std;

int main(){
	int A[MAXD][MAXC], N;
	do{
		cout << "Nhap kich thuoc ma tran vuong: ";
		cin >> N;
	}while(N<2);
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << "Nhap A[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}
	}
	
	cout << "\nMa tran vuong A la:\n";
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
	
	cout << "\nDuong cheo chinh: ";
	for(int i=0; i<N; i++){
		cout << A[i][i] << " ";
	}
	
	cout << "\nDuong Cheo Phu: ";
	for(int i=0; i<N; i++){
		cout << A[i][N-1-i] << " ";
	}
	return 0;
}
