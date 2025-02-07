#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

int A[MAX], n, dem, a, c, W, K;
void Input();
void Try(int);
void Check();
void Output();

int main(){
	Input();
	Try(1);
	cout << "\nCo " << dem << " xau";
	return 0;
}
void Input(){
	do{
		cout << "Nhap n: ";
		cin >> n;
		cout << "Nhap a: ";
		cin >> a;
		cout << "Nhap c: ";
		cin >> c;
	}while((n<=0) || (a<=0) || (c<=0));
	do{
		cout << "Nhap W: ";
		cin >> W;
		cout << "Nhap K: ";
		cin >> K;
	}while(((W<0)||(W>32000)) || ((K<0)||(K>32000)));
}

void Check(){
	int tong1=0, tong2=0;
	for(int i=1; i<=n; i++){
		tong1 += a*A[i];
		tong2 += c*A[i];
	}
	if((tong1<=W) && (tong2==K)) Output();
}

void Try(int i){
	for(int j=0; j<=1; j++){
		A[i]=j;
		if(i==n)
				Check();
		else
			Try(i+1);
	}
}

void Output(){
	for(int i=1; i<=n; i++){
		cout << A[i] << " ";
	}
	dem++;
	cout << "\n";
}
