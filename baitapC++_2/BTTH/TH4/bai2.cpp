#include <iostream>
#include <cmath>

using namespace std;

class ptbn{
	private:
		double b, c;
	public:
		ptbn(){
			b=0;
			c=0;
		}
		~ptbn(){
		}
		void setB(double b){
			this->b = b;
		}
		double getB(){
			return b;
		}
		void setC(double c){
			this->c = c;
		}
		double getC(){
			return c;
		}
		void gpt(){
			if(b==0){
				if(c==0){
					cout << "Vo so nghiem";
				}
				else{
					cout << "Vo nghiem";
				}
			}
			else{
				cout << "x = ";
				c!=0 ? cout << -c/b : cout << 0;
			}
		}
};

class ptbh : public ptbn{
	private:
		double a;
	public:
		ptbh(){
			a=0;
		}
		~ptbh(){
		}
		void setA(double a){
			this->a = a;
		}
		double getA(){
			return a;
		}
		void gpt(){
			if(a==0){
				ptbn::gpt();
			}
			else{
				double delta = pow(getB(),2) - 4*a*getC();
				double x1, x2;
				if(delta<0){
					cout << "Vo Nghiem";
				}
				else if(delta==0){
					x1 = -getB()/(2*a);
					cout << "x1 = x2 = " << x1;
				}
				else{
					x1 = (-getB()+sqrt(delta))/(2*a);
					x2 = (-getB()-sqrt(delta))/(2*a);
					cout << "x1 = " << x1 << "\n";
					cout << "x2 = " << x2 << "\n";
				}
			}
		}
};

int main(){
	double a, b, c;
	cout << "Nhap cac he so a, b, c: ";
	cin >> a >> b >> c;
	ptbh A;
	A.setA(a); A.setB(b); A.setC(c);
	cout << "Phuong trinh co dang: "; cout << A.getA() << "*X*X ";
	if(A.getB()>=0) cout << "+ ";
	cout << A.getB() << "*X ";
	if(A.getC()>=0) cout << "+ ";
	cout << A.getC() << " = 0\n";
	A.gpt(); 
	return 0;
}
