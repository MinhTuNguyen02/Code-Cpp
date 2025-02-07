#include <iostream>
#include <vector>
using namespace std;

int IsSCP(int n){
	int i=0, j=0;
	while(j<n){
		j = i*i;
		if(j==n){
			return 1;
		}
		i++;
	}
	return -1;
}

int IsSHH(int n){
	int tong=0;
	for(int i=1; i<n; i++){
		if(n%i==0){
			tong+=i;
		}
	}
	if(tong==n) return 1;
	return -1;
}

int DaoNguoc(int x){
	int m =x;
	int tmp=0;
	int kq=0;
	while(m!=0){
		tmp=m%10;
		kq = kq*10 + tmp;
		m/=10;
	}
	return kq;
}

int IsSTT(int x){
	int y = DaoNguoc(x);
	int uoc=1;
	for(int i=2; i<min(x,y); i++){
		if(x%i==0 && y%i==0)
			return -1;
	}

	return 1;
}

int BinarySearch(int a[], int m, int x){
	int mid, left=0, right = m-1;
	while(left<=right){
		mid = (left+right)/2;
		if(x==a[mid])
			return 1;
		else if(x>a[mid])
			left = mid+1;
		else
			right = mid-1;
	}
	return -1;
}

int IsSMM(int n){
	int m=n, tmp, kq, i=0, count =0;
	int *p= new int;
	while(1){
		if(m==1)
			return 1;
		else if(m<10)
			m=m*m;
		else{
			tmp=0, kq=0;
			while(m!=0){
				tmp=m%10;
				kq += tmp*tmp;
				m/=10;
			}
			if(BinarySearch(p,count,kq)==1){
				break;
			}
			p[i++] = kq;
			count++;
			m=kq;
		}
	}
	delete [] p;
	return -1;
}

int main(){
	int n = 687;
//	cout << IsSCP(n);
//	cout << IsSHH(n);
	cout << IsSTT(n);
//	cout << IsSMM(n);
	return 0;
}
