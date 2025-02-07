#include <iostream>
#include <cmath>
#define MAX 100

using namespace std;

int TimKiem(int [], int, int);

int main(){
	int A[MAX], N=0, k, dem=0;
	for(int i=0; ; i++){
		do{
			cout << "Nhap mot so nguyen duong [10;100]: ";
			cin >> A[i];
		}while((A[i]<10) || (A[i]>100));
		N++;
		k = A[i];
		if(TimKiem(A, N, k)==-1){
			cout << k << "\n";
			dem++;
		}
		if(dem==20) break;
	}
	return 0;
}

int TimKiem(int a[], int n, int k){
	for(int i=n-2; i>=0; i--){
		if(a[i]==k)
			return 1;
	}
	return -1;
}
