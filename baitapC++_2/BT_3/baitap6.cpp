#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, Uoc;
	do{
		cout << "Nhap so nguyen n (n>=2): ";
		cin >> n;
	}while(n<2);
	
	for(int i=2; i<=n; i++){
		Uoc=0;
		for(int j=2; j<=sqrt(i); j++){
			if(i%j==0){
				Uoc++;
			}
		}
		if(Uoc==0) cout << i << " ";
	}
	return 0;
}
