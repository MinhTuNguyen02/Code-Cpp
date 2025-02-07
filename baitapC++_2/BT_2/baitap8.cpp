#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double GioVao, GioRa, ThoiGian, Tien, ThoiGianGiamGia;
	do{
		cout << "Nhap gio vao: ";
		cin >> GioVao;
		cout << "Nhap gio ra: ";
		cin >> GioRa;
	}while((GioVao<8) || (GioVao>GioRa) || (GioRa>24));
	
	ThoiGian = GioRa - GioVao;
	
	if(ThoiGian<=3){
		if((GioVao>=8) && (GioRa<=17))
			Tien = (ThoiGian*30000)*90/100;
		else
			Tien = ThoiGian*30000;
	}
	else{
		ThoiGianGiamGia = ThoiGian - 3;
		if((GioVao>=8) && (GioRa<=17))
			Tien = (90000 + (ThoiGianGiamGia)*30000*70/100)*90/100;
		else
			Tien = 90000 + (ThoiGianGiamGia)*30000*70/100;
	}
	cout << "So tien khach phai tra la: " << Tien;
	return 0;
}
