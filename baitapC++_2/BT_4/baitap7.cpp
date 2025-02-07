#include <iostream>
#include <cmath>

using namespace std;

int GiaiThua(int);
double tongNDGT(int);
int TichChanLe(int);

int main(){
	int n;
	do{
		cout << "Nhap n(n>0): ";
		cin >> n;
	}while(n<=0);
	cout << "S = " << tongNDGT(n);
	cout << "\nP = " << TichChanLe(n);
	return 0;
}

double tongNDGT(int N){
	double tong=0;
	for(int i=1; i<=N; i++){
		tong += 1/(double)GiaiThua(i);
	}
	return tong;
}

int GiaiThua(int N){
	int gt=1;
	for(int i=1; i<=N; i++){
		gt *= i;
	}
	return gt;
}

int TichChanLe(int N){
	int P=1;
	for(int i=N; i>=1; i-=2){
		P *= i;
	}
	return P;
}
