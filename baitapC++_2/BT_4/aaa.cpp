#include <iostream>
#include <cmath>


using namespace std;

int DayTangDan(int []);

int main(){
	int a[4];
	for(int i=0; i<4; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	DayTangDan(a);
	for(int i=0; i<4; i++){
		cout << a[i] << " ";
	}
	return 0;
}

int DayTangDan(int a[]){
	for(int i=4-1; i>=1; i--){
		for(int j=0; j<i; j++){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
