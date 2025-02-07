#include <iostream>
#include <cmath>

using namespace std;

int TICH(int);

int main(){
	int n;
	do{
		cout << "Nhap n: ";
		cin >> n;
	}while(n<=0);
	cout << TICH(n);
	return 0;
}

int TICH(int n){
	if(n==1)
		return 1;
	else
		return n*TICH(n-1);
}
