#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, kq1, kq2;
	do{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}while(n<=0);
	
	kq1 = pow(n+1,2);
	
	for(int i=1; i<=(2*n+1); i+=2){
		kq2 +=i;
	}
	cout << "Ket qua cong thuc la: " << kq1 << "\n";
	cout << "Ket qua vong For: " << kq2;
	return 0;
}
