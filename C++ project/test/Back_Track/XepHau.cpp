#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

int A[MAX], Chinh[MAX], Phu[MAX], check[MAX], n, dem=0; 

void Input();
void Try(int);
void Output();

int main(){
	Input();
	Try(1);
	cout << "\nCo " << dem << " cach";
	return 0;
}

void Input(){
	do{
		cout << "Nhap n: ";
		cin >> n;
	}while(n<=0);
	for(int i=1; i<=n; i++) check[i] = true;
	for(int i=1; i<=2*n-1; i++){
		Chinh[i] = true;
		Phu[i] = true;
	}
}

void Try(int i){
	for(int j=1; j<=n; j++){
		if(check[j] && Chinh[i-j+n] && Phu[i+j-1]){
			A[i] = j;
			check[j] = Chinh[i-j+n] = Phu[i+j-1] = false;
			if(i==n)
				Output();
			else
				Try(i+1);
			check[j] = Chinh[i-j+n] = Phu[i+j-1] = true;
		}
	}
}
void Output(){
	for(int i=1; i<=n; i++){
		cout << A[i] << " ";
	}
	dem++;
	cout << "\n";
}
