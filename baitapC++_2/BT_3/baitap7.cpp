#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int m, n, USCLN, BSCNN;
	do{
		cout << "Nhap m: ";
		cin >> m;
		cout << "Nhap n: ";
		cin >> n;
	}while((m<=0) || (n<=0));
	
	for(int i=min(m,n); i>0; i--){
		if((m%i==0) && (n%i==0)){
			USCLN = i;
			break;
		}
	}
	for(int j=max(m,n); j<=m*n; j++){
		if((j%m==0) && (j%n==0)){
			BSCNN = j;
			break;
		}
	}
	cout << "Uoc so chung lon nhat cua " << m << " va " << n << " la: " << USCLN << "\n";
	cout << "Boi so chung nho nhat cua " << m << " va " << n << " la: " << BSCNN;
 	return 0;
}
