#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, Uoc, Dem;
	do{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}while(n<=0);
	cout << n << " = ";
	for(int i=2; i<=n; i++){
		Dem=0;
		while(n%i==0){
			n /=i;
			Dem++;
		}
		if(Dem){
			cout << i;
			if(Dem>1)
				cout << "^" << Dem;
			if(n>1)
				cout << " * ";
		}
			
	}
	
	return 0;
}
