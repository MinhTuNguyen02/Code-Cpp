#include <iostream>
#include <cmath>

using namespace std;

int Fun(int n);

int main(){
	int n=57963;
	cout << Fun(n);
	return 0;
}

int Fun(int n){
	int m=n;
	int* pt = new int;
	if(pt==NULL) exit(1);
	int i=0, count=0;
	while(m!=0){
		pt[i++] = m%10;
		m/=10;
		count++;
	}
	
	for(int j=count-1; j>=0; j--){
		if(pt[j]>pt[j-1]){
			pt[j]=-1;
			break;
		}
	}
	
	int kq=0;
	for(int k=count-1; k>=0; k--){
		if(pt[k]!=-1){
			kq = kq*10 + pt[k];
		}
	}
	
	delete [] pt;
	return kq;
}
