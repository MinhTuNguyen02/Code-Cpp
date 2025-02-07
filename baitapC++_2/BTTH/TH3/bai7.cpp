#include <iostream>
#include <cmath>

using namespace std;

void giaipt();

class ptb2{
	private:
		float a, b, c;
	public:
		ptb2(){
			a=0;
			b=0;
			c=0;
		}
		~ptb2(){
		}
		void setA(float a){
			this->a = a;
		}
		float getA(){
			return a;
		}
		void setB(float b){
			this->b = b;
		}
		float getB(){
			return b;
		}
		void setC(float c){
			this->c = c;
		}
		float getC(){
			return c;
		}
		void giaipt(){
			float x1, x2;
			if(a==0){
				if(b==0){
					if(c==0){
						cout << "pt co vo so nghiem";
					}
					else{
						cout << "pt vo nghiem";
					}
				}
				else{
					c!=0 ? x1=-c/b : x1=0;
					cout << "pt co 1 nghiem duy nhat: x = " << x1;
				}
			}
			else{
				float delta = b*b - 4*a*c;
				if(delta<0){
					cout << "pt vo nghiem";
				}
				else if(delta==0){
					x1=-b/(2*a);
					cout << "pt co nghiem kep x1 = x2 = " << x1;
				}
				else{
					x1 = (-b-sqrt(delta))/(2*a);
					x2 = (-b+sqrt(delta))/(2*a);
					cout << "PT co 2 nghiem phan biet:\nx1 = " << x1 << "; x2 = " << x2;
				}
			}
		}
};

int main(){
	ptb2 A;
	float inttmp;
	
	cout << "Giai phuong trinh bac 2:\n";
	cout << "Nhap a: "; cin >> inttmp; A.setA(inttmp);
	cout << "Nhap b: "; cin >> inttmp; A.setB(inttmp);
	cout << "Nhap c: "; cin >> inttmp; A.setC(inttmp);
	
	A.giaipt();
	return 0;
}
