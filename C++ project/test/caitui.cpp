#include <iostream>

using namespace std;

const int n=4;
int Fopt = -99999999999999;
int bk, ck, gk; 
int A[n], B[n], C[n] = {0}, b, cost, weight=0;

void Nhap(double[]);
void Xuat(double[]);
void Try(int);

int main(){
	cout << "Nhap f(x):\n";
	Nhap(A);
	cout << "\nNhap ham kl:\n";
	Nhap(B);
	cout << "Nhap kl: ";
	cin >> b;
	Try(1);
}

void Nhap(double A[]){
	for(int i=1; i<=n; i++){
		cout << "nhap: ";
		cin >> A[i];
	}
}

void Xuat(double A[]){
	for(int i=1; i<=n; i++){
		cout << A[i] << " ";
	}
	cout << "\n";
}

void Try(int i){
	for(int j=1; j>=0; j--){
		C[i]=j;
		
		bk -= B[k]*C[k];
		if(bk<0)
			continue;
			ck += A[k]*C[k];
		gk = ck + bk*(A[i+1]/B[i+1]);
		if(i==n){
			if(ck>Fopt){
				Fopt = ck;
				cout << "Fopt =" << Fopt;
			}
		}
		else if(gk<=Fopt){
			Try(i+1);
		}
	}
}
