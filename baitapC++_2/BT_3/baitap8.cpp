#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, GiaiThua=1;
	do{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	}while(n<0);
	
	if(n&1){
		for(int i=1; i<=n; i+=2){
			GiaiThua *=i;
		}
	}
	else{
		for(int i=2; i<=n; i+=2){
			GiaiThua *=i;
		}
	}
	cout << n << "!! = " << GiaiThua;
	return 0;
}
