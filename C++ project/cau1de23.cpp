#include <iostream>
#define MD 50
#define MC 50

using namespace std;

int DemTPLT(int a[MD][MC], int m, int n);
void Dem(int a[MD][MC], int m, int n, int i, int j);

int main(){
	int a[MD][MC];
	int m,n;
	cout << "nhap m,n: ";
	cin >> m >> n;
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout << "nhap a[" << i << "][" << j << "]: " ;
			cin >> a[i][j];
		}
	}

	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "Ma tran co " << DemTPLT(a,m,n) << " thanh phan lien thong\n";

	return 0;
}

int DemTPLT(int a[MD][MC], int m, int n){
	int count=0;
	for(int z=0; z<m; z++){
		for(int x=0; x<n; x++){
			if(a[z][x]==-1){
				Dem(a,m,n,z,x);
				count++;
			}
		}
	}
	return count;
}

void Dem(int a[MD][MC], int m, int n, int i, int j){
	a[i][j]=0;
	if(a[i][j+1]==-1 && j!=n-1){
		Dem(a,m,n,i,j+1);
	}
	if(a[i+1][j]==-1 && i!=m-1){
		Dem(a,m,n,i+1,j);
	}
	if(a[i][j-1]==-1 && j!=0){
		Dem(a,m,n,i,j-1);
	}
	if(a[i-1][j]==-1 && i!=0){
		Dem(a,m,n,i-1,j);
	}
}
