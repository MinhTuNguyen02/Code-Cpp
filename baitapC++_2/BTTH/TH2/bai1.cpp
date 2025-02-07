#include <iostream>

using namespace std;

int tong(int *a, int *b);

int main(){
	int n, sum=0;
	do{
		cout << "Nhap gia tri so n= ";
		cin >> n;
	}while(n<=0);
	
	for(int i=1; i<=n; i++){
		sum = tong(&sum,&i);
	}
	cout << "Tong T= " << sum;
	return 0;
}

int tong(int *a, int *b){
	return (*a + *b);
}
