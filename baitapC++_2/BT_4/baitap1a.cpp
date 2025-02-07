#include <iostream>
using namespace std;

char DoiKyTuHoaSangThuong(char);

int main(){
	char chr;
	do{
		cout << "Nhap ky tu hoa: ";
		cin >> chr;
	}while((chr<65) || (chr>90));
	DoiKyTuHoaSangThuong(chr);
	return 0;
}

char DoiKyTuHoaSangThuong(char chr){
	cout << "Ky tu thuong la: " << char(chr+32);
}
