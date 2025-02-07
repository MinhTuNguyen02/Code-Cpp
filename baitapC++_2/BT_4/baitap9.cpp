#include <iostream>
#define MAX 100

using namespace std;

void Nhap(int A[ ], int &N);
void Xuat(int A[ ], int N);

int main(){
	int A[MAX], N;
	Nhap(A,N);
	cout << "\nMang vua nhap la: ";
	Xuat(A,N);
	return 0;
}

void Nhap(int A[ ], int &N){
	do{
		cout << "Nhap N: ";
		cin >> N;
	}while(N<=0);
	for(int i=0; i<N; i++){
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> A[i];
	}
}

void Xuat(int A[ ], int N){
	for(int i=0; i<N; i++){
		cout << A[i] << " ";
	}
}
