#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	double i, j, GiaiThua, kq1=0, kq2=0, kq3=0;
	do{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}while(n<=0);
	
	for(i=1; i<=n; i++){
		GiaiThua=1;
		for(j=1; j<=i; j++){
			GiaiThua *=j;
		}
		kq1 += 1/GiaiThua;
	}
	
	i=1;
	while(i<=n){
		GiaiThua=1;
		j=1;
		while(j<=i){
			GiaiThua *=j;
			j++;
		}
		kq2 += 1/GiaiThua;
		i++;
	}
	
	i=1;
	do{
		j=1;
		GiaiThua=1;
		do{
			GiaiThua *=j;
			j++;	
		}while(j<=i);
		kq3 += 1/GiaiThua;
		i++;
	}while(i<=n);
	
	cout << "Ket qua vong For: " << kq1 << "\n";
	cout << "Ket qua vong While: " << kq2 << "\n";
	cout << "Ket qua vong Do...While: " << kq3;
	return 0;
}
