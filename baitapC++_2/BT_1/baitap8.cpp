#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x, y1, y2, y3, y4, y5;
	cout << "Nhap x: ";
	cin >> x;
	
	y1 = 2*pow(x,3) + 5*pow(x,2) + 7*x + 15;
	y2 = pow(sin(x),2) + pow(cos(2*x),2) + pow(tan(3*x),2);
	y3 = pow(x+10,x+5);
	y4 = 3*exp(cos(x+1));
	y5 = log(x+100);
	
	cout << "y1 = " << y1 << "\n";
	cout << "y2 = " << y2 << "\n";
	cout << "y3 = " << y3 << "\n";
	cout << "y4 = " << y4 << "\n";
	cout << "y5 = " << y5 << "\n";
	return 0;
}
