#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int Thang;
	do{
		cout << "Nhap Thang: ";
		cin >> Thang;
		
		switch(Thang){
			case 1:
			case 2:
			case 12:
				cout << "Winter";
				break;
			case 3:
			case 4:
			case 5:
				cout << "Spring";
				break;
			case 6:
			case 7:
			case 8:
				cout << "Summer";
				break;
			case 9:
			case 10:
			case 11:
				cout << "Autumn";
				break;
			default:
				cout << "Thang khong hop le, vui long nhap lai!\n";
		}
	}while((Thang<1) || (Thang>12));
	return 0;
}
