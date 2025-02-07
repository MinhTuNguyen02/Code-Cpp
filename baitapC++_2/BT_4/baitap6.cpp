#include <iostream>

using namespace std;

long tongLe(int N);

int main(){
	int N;
	do{
		cout << "Nhap N(N>=1): ";
		cin >> N;
	}while(N<1);
	cout << "Ket qua = " << tongLe(N);
	return 0;
}

long tongLe(int N){
	int tong=0;
	for(int i=1; i<=(N%2==0?N-1:N); i+=2){
		tong += i;
	}
	return tong;
}
