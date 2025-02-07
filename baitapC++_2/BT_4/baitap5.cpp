#include <iostream>
#define MAX 100

using namespace std;

int Fibonacci(int[], int);

int main(){
	int A[MAX], N;
	do{
		cout << "Nhap N(N>0): ";
		cin >> N;
	}while(N<=0);
	
	cout << "\n" << N << " phan tu dau tien cua day Fibonacci:\n";
	Fibonacci(A,N);
	return 0;
}

int Fibonacci(int A[], int N){
	A[0] = 0;
	A[1] = 1;
	for(int i=2; i<N; i++){
		A[i] = A[i-1] + A[i-2];
	}
	
	for(int i=0; i<N; i++){
		cout << A[i] << " ";
	}
}
