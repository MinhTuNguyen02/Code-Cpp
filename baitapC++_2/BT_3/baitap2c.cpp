#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, i, kq1=0, kq2=0, kq3=0;
	do{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}while(n<=0);
	
	for(i=2; i<=2*n; i+=2){
		kq1 += pow(i,4);
	}
	
	i = 2;
	while(i<=2*n){
		kq2 += pow(i,4);
		i+=2;
	}
	
	i = 2;
	do{
		kq3 += pow(i,4);
		i+=2;
	}while(i<=2*n);
	
	cout << "Ket qua vong For: " << kq1 << "\n";
	cout << "Ket qua vong While: " << kq2 << "\n";
	cout << "Ket qua vong Do...While: " << kq3;
	return 0;
}
