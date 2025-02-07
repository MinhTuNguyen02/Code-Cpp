#include <iostream>
#include <cmath>
#define MAX 10000

using namespace std;

void Eratoshthenes(int *a, int &n);
void XuatMang(int *a, int n);


int main(){
	int* a = new int[MAX];
	int n = 1000;
	
	for(int i=0; i<n; i++){
		a[i] = i;
	}
	
	Eratoshthenes(a,n);
	cout << "Mang so nguyen to:\n";
	XuatMang(a,n);
	
	delete [] a;
	return 0;
}

void XuatMang(int *a, int n){
	for(int i=0; i<n; i++){
		cout << a[i] << "\t";
	}
}

void Eratoshthenes(int *a, int &n){
	a[0] = -1;
	a[1] = -1;
	int j = 0;
	long k = 0;
	
	int i = 2;
	while(i<n){
		if(a[i] != -1){
			j = 2;
			k = i;
			while(k<n){
				k = i*j;
				if(k<n){
					a[k] = -1;
				}
				j++;
			}
		}
		i++;
	}
	
	int* b = new int[n];
	j = 0;
	for(i=2; i<n; i++){
		if(a[i]>1){
			b[j] = a[i];
			j++;
		}
	}
	n = j-1;
	for(i=0; i<n; i++){
		a[i] = b[i];
	}
	
	delete [] b;
}


