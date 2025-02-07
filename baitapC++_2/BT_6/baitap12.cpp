#include <iostream>
#include <cmath>
using namespace std;

struct DIEM{
	double x;
	double y;
};

void NhapDiem(DIEM &);
void XuatDiem(DIEM &);
double KhoangCach(DIEM &, DIEM &);
void DiemDoiXungQuaGocO(DIEM);
void DiemDoiXungQuaTrucOX(DIEM);
void DiemDoiXungQuaTrucOY(DIEM);
void KTGocPhanTu(DIEM &);

int main(){
	DIEM A, B;
	cout << "Nhap diem A\n";
	NhapDiem(A);
	cout << "Nhap diem B\n";
	NhapDiem(B);
	
	cout << "Khoang cach giua 2 diem la: " << KhoangCach(A,B) << "\n";
	
	DiemDoiXungQuaGocO(B);
	DiemDoiXungQuaTrucOX(A);
	DiemDoiXungQuaTrucOY(B);
	
	KTGocPhanTu(A);
	KTGocPhanTu(B);
	return 0;
}

void NhapDiem(DIEM &p){
	cout << "Nhap x: ";
	cin >> p.x;
	cout << "Nhap y: ";
	cin >> p.y;
}

void XuatDiem(DIEM &p){
	cout << "(" << p.x << "," << p.y << ")";
	cout << "\n";
}

double KhoangCach(DIEM &a, DIEM &b){
	double d = sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
	return d;
}

void DiemDoiXungQuaGocO(DIEM p){
	p.x = -p.x;
	p.y = -p.y;
	cout << "Diem doi xung qua goc toa do O la: ";
	XuatDiem(p);
	
}

void DiemDoiXungQuaTrucOX(DIEM p){
	p.y = -p.y;
	cout << "Diem doi xung qua truc OX la: ";
	XuatDiem(p);
}

void DiemDoiXungQuaTrucOY(DIEM p){
	p.x = -p.x;
	cout << "Diem doi xung qua truc OY la: ";
	XuatDiem(p);
}

void KTGocPhanTu(DIEM &p){
	if((p.x>0) && (p.y>0))
		cout << "Diem thuoc goc phan tu thu I\n";
	else if((p.x<0) && (p.y>0))
		cout << "Diem thuoc goc phan tu thu II\n";
	else if((p.x<0) && (p.y<0))
		cout << "Diem thuoc goc phan tu thu III\n";
	else if((p.x>0) && (p.y<0))
		cout << "Diem thuoc goc phan tu thu IV\n";
}
