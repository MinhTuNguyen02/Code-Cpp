#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, GiaiThua=1;
	do{
		cout << "Nhap so nguyen n: ";
		cin >> n;
	}while(n<0);
	
	for(int i=1; i<=n; i++){
		GiaiThua *=i;
	}
	cout << n << "! = " << GiaiThua;
	return 0;
}
