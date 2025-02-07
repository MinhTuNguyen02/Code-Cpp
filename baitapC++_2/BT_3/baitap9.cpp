#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int ToHop, n, k, m, gt1=1, gt2=1, gt3=1;
	do{
		cout << "Nhap so nguyen n: ";
		cin >> n;
		cout << "Nhap so nguyen k: ";
		cin >> k;
	}while((k<0) || (k>n));
	m = n-k;
	
	for(int i=1; i<=n; i++){
		gt1 *=i;
	}
	for(int i=1; i<=k; i++){
		gt2 *=i;
	}
	for(int i=1; i<=m; i++){
		gt3 *=i;
	}
	ToHop = gt1/(gt2*gt3);
	cout << ToHop;
	return 0;
}
