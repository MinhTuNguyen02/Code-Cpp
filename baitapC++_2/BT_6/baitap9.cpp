#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct PHANSO{
	int tu;
	int mau;
};

void NhapPhanSo(PHANSO &);
void XuatPhanSo(PHANSO &);
void RutGon(PHANSO &);
void TongPhanSo(PHANSO &, PHANSO &);
void HieuPhanSo(PHANSO &, PHANSO &);
void TichPhanSo(PHANSO &, PHANSO &);
void ThuongPhanSo(PHANSO &, PHANSO &);
void KTToiGian(PHANSO &);
void QuyDong(PHANSO &, PHANSO &);
void KTAmhayDuong(PHANSO &);
void SoSanhPhanSo(PHANSO &, PHANSO &);

int main(){
	PHANSO a, b;
	cout << "Nhap phan so a:\n";
	NhapPhanSo(a);
	cout << "Nhap phan so b:\n";
	NhapPhanSo(b);
	
	cout << "\nKiem tra toi gian phan so a:\n";
	KTToiGian(a);
	cout << "\n";
	
	TongPhanSo(a,b);
	HieuPhanSo(a,b);
	TichPhanSo(a,b);
	ThuongPhanSo(a,b);
	
	cout << "\n";
	KTAmhayDuong(a);
	KTAmhayDuong(b);
	cout <<"\n";
	SoSanhPhanSo(a,b);
	return 0;
}

void NhapPhanSo(PHANSO &ps){
	do{
		cout << "Nhap tu so: ";
		cin >> ps.tu;
		cout << "Nhap mau so: ";
		cin >> ps.mau;
	}while(ps.mau==0);
	if((ps.tu<0)&&(ps.mau<0)){
		ps.tu = abs(ps.tu);
		ps.mau = abs(ps.mau);
	}
}

void XuatPhanSo(PHANSO &ps){
	cout << ps.tu << "/" << ps.mau;
	cout << "\n";
}

void RutGon(PHANSO &ps){
	int ucln = __gcd(abs(ps.tu),ps.mau);
	ps.tu /= ucln;
	ps.mau /= ucln;
	if((ps.tu<0)&&(ps.mau<0)){
		ps.tu = abs(ps.tu);
		ps.mau = abs(ps.mau);
	}
}

void TongPhanSo(PHANSO &a, PHANSO &b){
	PHANSO c;
	int bcnn = (a.mau*b.mau)/__gcd(a.mau,b.mau);
	if(a.mau!=b.mau)
		QuyDong(a,b);
	c.tu = a.tu + b.tu;
	c.mau = bcnn;
	RutGon(c);
	RutGon(a);
	RutGon(b);
	cout << "Tong = ";
	XuatPhanSo(c);
}

void HieuPhanSo(PHANSO &a, PHANSO &b){
	PHANSO c;
	int bcnn = (a.mau*b.mau)/__gcd(a.mau,b.mau);
	if(a.mau!=b.mau)
		QuyDong(a,b);
	c.tu = a.tu - b.tu;
	c.mau = bcnn;
	RutGon(c);
	RutGon(a);
	RutGon(b);
	cout << "Hieu = ";
	XuatPhanSo(c);
}

void TichPhanSo(PHANSO &a, PHANSO &b){
	PHANSO c;
	c.tu = a.tu*b.tu;
	c.mau = a.mau*b.mau;
	RutGon(c);
	cout << "Tich = ";
	XuatPhanSo(c);
}

void ThuongPhanSo(PHANSO &a, PHANSO &b){
	PHANSO c;
	c.tu = a.tu*b.mau;
	c.mau = a.mau*b.tu;
	RutGon(c);
	cout << "Thuong = ";
	XuatPhanSo(c);
}

void KTToiGian(PHANSO &ps){
	__gcd(ps.tu,ps.mau)==1 ? cout << "Phan so da toi gian" : cout << "Phan so chua toi gian";
	cout << "\n";
}

void QuyDong(PHANSO &a, PHANSO &b){
	if(a.mau%b.mau==0){
		b.tu *= (a.mau/b.mau);
		b.mau = a.mau;
	}
	else if(b.mau%a.mau==0){
		a.tu *= (b.mau/a.mau);
		a.mau = b.mau;
	}
	else{
		int bcnn = abs((a.mau*b.mau)/__gcd(a.mau,b.mau));
		a.tu *= bcnn/a.mau;
		a.mau = bcnn;
		b.tu *= bcnn/b.mau;
		b.mau = bcnn;
	}
}

void KTAmhayDuong(PHANSO &ps){
	(ps.tu*ps.mau)<0 ? cout << "Phan so am" : cout << "Phan so duong";
	cout << "\n";
}

void SoSanhPhanSo(PHANSO &a, PHANSO &b){
	QuyDong(a,b);
	if(a.tu>b.tu)
		cout << "Phan so a lon hon phan so b";
	else if(a.tu<b.tu)
		cout << "Phan so a nho hon phan so b";
	else 
		cout << "Hai phan so bang nhau";
	RutGon(a);
	RutGon(b);
}
