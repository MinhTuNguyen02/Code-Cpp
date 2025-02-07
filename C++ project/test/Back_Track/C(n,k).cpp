#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

int A[MAX], n, k, tong=0;

int LaSNT();
void Input();
void Try(int);
void Output();

int main(){
	Input();
	Try(1);
	cout << tong;
	return 0;
}

void Input(){
	do{
		cout << "Nhap n: ";
		cin >> n;
		cout << "Nhap k: ";
		cin >> k;
	}while((n<=0) || (k<=0) || (k>n));
}

void Try(int i){
	for(int j= A[i-1]+1; j<=n-k+i; j++){
		A[i]=j;
		tong+=A[i];
		if((i==k) && (LaSNT()==1)){
			Output();
			tong=0;
		}
		else
			Try(i+1);
	}
}

int LaSNT(){
	int uoc=0;
	for(int i=1; i<=tong; i++){
		if(tong%i==0) 
			uoc++;
	}
	if(uoc==2)
		return 1;
	return 0;
}

void Output(){
	for(int i=1; i<=k; i++){
		cout << A[i] << " ";
	}
	cout << tong;
	cout << "\n";
}
