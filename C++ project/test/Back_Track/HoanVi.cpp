#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

int A[MAX], check[MAX], n;

int checklcs();
void Input();
void Try(int);
void Output();

int main(){
	Input();
	Try(1);
	return 0;
}

int checklcs(){
	int flag1 = 0, flag2 = 0;
	for(int i=1; i<=n; i++){
		if(A[i]==1)
		flag1=i;
	}
	for(int i=1; i<=n; i++){
		if(A[i]==2)
		flag2=i;
	}
	if(flag2>flag1)
		return 1;
	return 0;
}

void Input(){
	do{
		cout << "Nhap n: ";
		cin >> n;
	}while(n<=0);
	for(int i=1; i<=n; i++){
		check[i] = true;
	}
}

void Try(int i){
	for(int j=1; j<=n; j++){
		if(check[j]){
			A[i] = j;
			check[j]=false;
			if((i==n) && (checklcs()==1))
				Output();
			else
				Try(i+1);
			check[j]=true;
		}
	}
}

void Output(){
	for(int i=1; i<=n; i++){
		cout << A[i] << " ";
	}
	cout << "\n";
}
