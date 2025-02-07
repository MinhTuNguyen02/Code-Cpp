#include <iostream>

using namespace std;

int BSCNN(int a, int b);

int main(){
	int n;
	do{
		cout << "Nhap so n = ";
		cin >> n;
	}while(n<2);
	
	int tong=0;
	for(int i=2; i<=n; i++){
		tong += BSCNN(2*i-2,2*i);
	}
	cout << "tong = " << tong;
	return 0;
}

int BSCNN(int a, int b){
	int bcnn;
	for(int i=max(a,b); ; i+=max(a,b)){
		if((i%a==0) && (i%b==0)){
			bcnn = i;
			break;
		}
	}
	return bcnn;
}
