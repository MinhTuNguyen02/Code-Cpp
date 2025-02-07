#include <iostream>
#include <cmath>
using namespace std;

int luythua(int a, int b);
int IsAms(int n);
int IsPalindromic(int n);

int main(){
	int n=153;
	cout << IsAms(n) << "\n";
//	cout << IsPalindromic(n) << "\n";
	return 0;
}

int luythua(int a, int b){
	int kq=1;
	for(int i=0; i<b; i++){
		kq*=a;
	}
	return kq;
}

int IsAms(int n){
	int m=n;
	int tmp, kq=0;
	int mu;
	while(m!=0){
		m/=10;
		mu++;
	}
	m=n;
	while(m!=0){
		tmp = m%10;
		kq += luythua(tmp,mu);
		m/=10;
	}
	if(kq==n)
		return 1;
	return -1;
}

int IsPalindromic(int n){
	int m=n;
	int tmp;
	int kq=0;
	while(m!=0){
		tmp=m%10;
		kq = kq*10 + tmp;
		m/=10;
	}
	if(kq==n)
		return 1;
	return -1;
}
