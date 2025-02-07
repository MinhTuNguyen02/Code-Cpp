#include <iostream>
#include <cmath>
#define MAX 100
using namespace std;

const int Size = 5;
int A[Size],B[MAX], dem=0, check[2];

void Check();
void Try(int);
void Output();

int main(){
	Check();
	Try(1);
	return 0;
}

void Check(){
	check[0]=check[1]=true;
}

void Try(int i){
	for(int j=0; j<=1; j++){
		if(check[j]){
			A[i] = j;
			if(j==0) check[0]=false;
			else if(j==1) check[0]=true;
			if(i==Size)
				Output();
			else
				Try(i+1);
			check[0]=true;
		}
	}
}

void Output(){
	for(int i=1; i<=Size; i++){
		cout << A[i] << " ";
	}
	cout << "\n";
}
