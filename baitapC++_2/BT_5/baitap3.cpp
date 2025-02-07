#include <iostream>
#include <cmath>
#define MaxC 100
using namespace std;

double DetMTVuong(double A[][MaxC], int N);

int main(){
	double a[MaxC][MaxC];
	int n;
	int i, j;
	int Det;
	
	cout << "Nhap kich thuoc ma tran vuong: ";
	cin >> n;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout << "Nhap a[" << i << "," << j << "]: ";
			cin >> a[i][j];
		}
	}
	
	
	Det = DetMTVuong(a,n);
	cout << "Dinh thuc cua ma tran vua nhap la: " << Det;
	
	return 0;
}

double DetMTVuong(double A[][MaxC], int N){
	int i, j, k;
    for(i=0; i<N; i++){
        for(j=i+1; j<N; j++){
            double coef = A[j][i] / A[i][i];
            for(int k=i; k<N; k++) {
                A[j][k] = A[j][k] - coef * A[i][k];
            }
        }
    }
    
    double d=1;
    for(i=0; i<N; i++){
    	for(int j=0; j<N; j++){
    		if(i==j)
    			d *= A[i][j];
		}
	}
	return d;
}
