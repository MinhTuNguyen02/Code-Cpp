#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

int A[MAX], n, dem=0, demBit1=0, demBit0=0;

void SumBit();
void Nhap();
void Try(int);
void InKQ();

int main(){
	Nhap();
	Try(1);
	return 0;
}

void Nhap(){
	cout << "Nhap n: ";
	cin >> n;
}

void SumBit(){
	for(int i=1; i<=n; i++){
		if(A[i]==1)
			++demBit1;
	}
	if(demBit1>n/2)
		InKQ();
}

void Try(int i){
	for(int j=0; j<=1; j++){
		A[i] = j;
		if(i==n)
			SumBit();
		else
			Try(i+1);
	}
}

void InKQ(){
	cout << "Xau thu " << ++dem << ": " ;
	for(int i=1; i<=n; i++){
		cout << A[i] << " ";
	}
	cout << "\n";
}
