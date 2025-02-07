#include <iostream>

using namespace std;

void Dem (int a[], int n, int b[], int m);

int main(){
	int a[]= {1,6,9,13,18,18,20,31};
	int b[]= {2,3,8,13,15,21};
	int n=8, m=6;
	Dem(a,n,b,m);
	return 0;
}

void Dem (int a[], int n, int b[], int m){
	int i=0, j=0;
	while(j<m){
		if((b[j]<=a[i]) || (i==n)){
			cout << i << " ";
			j++;
		}
		else{
			i<n?i++:i=n;
		}
	}
}
