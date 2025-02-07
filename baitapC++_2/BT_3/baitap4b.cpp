#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	double i, kq1=0, kq2=0, kq3=0;
	do{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}while(n<=0);
	
	for(i=1; i<=n; i++){
		kq1 += 1/pow(i,2);
	}
	
	i=1;
	while(i<=n){
		kq2 += 1/pow(i,2);
		i++;
	}
	
	i=1;
	do{
		kq3 += 1/pow(i,2);
		i++;
	}while(i<=n);
	
	cout << "Ket qua vong For: " << kq1 << "\n";
	cout << "Ket qua vong While: " << kq2 << "\n";
	cout << "Ket qua vong Do...While: " << kq3;
	return 0;
}
