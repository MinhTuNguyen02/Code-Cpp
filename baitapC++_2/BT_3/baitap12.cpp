#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double n, Tong=0, TB;
	int Dem=0;
	
	while(true){
		cout << "Nhap n: ";
		cin >> n;
		if(n==9999){
			TB = Tong/Dem;
			break;
		}
		else{
			Tong += n;
			Dem++;
		}
	}
	cout << "Trung binh cong cua day so la: " << TB;
	return 0;
}
