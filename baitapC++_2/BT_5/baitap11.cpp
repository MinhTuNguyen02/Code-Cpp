#include <iostream>
#include <cmath>

using namespace std;

int TICHCHANLE(int);

int main(){
	int n;
	do{
		cout << "Nhap n: ";
		cin >> n;
	}while(n<=0);
	cout << TICHCHANLE(n);
	return 0;
}

int TICHCHANLE(int n){
	if(n<=0)
		return 1;
	else
		return n*TICHCHANLE(n-2);
}
