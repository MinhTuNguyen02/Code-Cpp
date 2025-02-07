#include <iostream>
#include <cmath>

using namespace std;

class Diem{
	private:
		double x, y;
	public:
		Diem(){
			x=0;
			y=0;
		}
		~Diem(){
		}
		void setX(double x){
			this->x = x;
		}
		double getX(){
			return x;
		}
		void setY(double y){
			this->y = y;
		}
		double getY(){
			return y;
		}
};

class Doanthang : public Diem{
	private:
		double a, b;
	public:
		Doanthang() : Diem(){
			a=0;
			b=0;
		}
		~Doanthang(){
		}
		void setA(double a){
			this->a = a;
		}
		double getA(){
			return a;
		}
		void setB(double b){
			this->b = b;
		}
		double getB(){
			return b;
		}
		double ChieuDai(){
			return sqrt(pow(a-getX(),2) + pow(b-getY(),2));
		}
		void KTsongsong(Doanthang F){
			double kq1, kq2;
			kq1 = (a-getX())*(F.getB()-F.getY());
			kq2 = (b-getY())*(F.getA()-F.getX());
			if(kq1==kq2)
				cout << "Hai duong thang song song voi nhau";
			else
				cout << "Hai duong thang khong song song";
		}
};

int main(){
	Doanthang A, B;
	double x, y, a, b;
	cout << "Nhap toa do doan thang thu 1: ";
	cin >> x >> y >> a >> b;
	A.setX(x); A.setY(y); A.setA(a); A.setB(b);
	
	cout << "Nhap toa do doan thang thu 2: ";
	cin >> x >> y >> a >> b;
	B.setX(x); B.setY(y); B.setA(a); B.setB(b);
	
	cout << "Toa do duong thang thu 1: (" << A.getX() << "," << A.getY() << ")(" << A.getA() << "," << A.getB() << ")\n";
	cout << "Chieu dai doan thang thu 1: " << A.ChieuDai() << "\n";
	cout << "Toa do duong thang thu 2: (" << B.getX() << "," << B.getY() << ")(" << B.getA() << "," << B.getB() << ")\n";
	cout << "Chieu dai doan thang thu 2: " << B.ChieuDai() << "\n";
	
	A.KTsongsong(B);
	return 0;
}
