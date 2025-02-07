#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, Uoc;
	do{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}while(n<2);
	
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			Uoc++;
		}
	}
	if(Uoc==0) cout << n << " la so nguyen to";
	else cout << n << " khong phai so nguyen to";
	return 0;
}
