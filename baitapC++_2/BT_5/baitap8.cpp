#include <iostream>
#include <cmath>

using namespace std;

int TONG(int);

int main(){
	int n;
	do{
		cout << "Nhap n: ";
		cin >> n;
	}while(n<=0);
	cout << TONG(n);
	return 0;
}

int TONG(int n){
	if(n==1)
		return 1;
	else
		return n + TONG(n-1);
}
