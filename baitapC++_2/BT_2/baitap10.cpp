#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int Thu;
	do{
		cout << "Nhap Thu(1-7): ";
		cin >> Thu;
		
		switch(Thu){
		case 1:
			cout << "Sunday";
			break;
		case 2:
			cout << "Monday";
			break;
		case 3:
			cout << "Tueday";
			break;
		case 4:
			cout << "Wednesday";
			break;
		case 5:
			cout << "Thursday";
			break;
		case 6:
			cout << "Friday";
			break;
		case 7:
			cout << "Saturday";
			break;
		default:
			cout << "Thu khong hop le, vui long nhap lai!\n";
	}
	}while((Thu<1) || (Thu>7));
	return 0;
}
