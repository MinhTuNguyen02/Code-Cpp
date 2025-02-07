#include <iostream>
#include <cmath>

using namespace std;

int TONGCHANLE(int);

int main(){
	int n;
	do{
		cout << "Nhap n: ";
		cin >> n;
	}while(n<=0);
	cout << TONGCHANLE(n);
	return 0;
}

int TONGCHANLE(int n){
	if(n<=0)
		return 0;
	else
		return n + TONGCHANLE(n-2);
}
