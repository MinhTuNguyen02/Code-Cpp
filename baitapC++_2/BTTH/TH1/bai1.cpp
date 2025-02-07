#include <iostream>
#include <iomanip>

using namespace std;

float trung_binh(int a, int b, int c);

int main(){
	int a, b, c, max;
	cout << "Nhap gia tri so thu 1= ";
	cin >> a;
	cout << "Nhap gia tri so thu 2= ";
	cin >> b;
	cout << "Nhap gia tri so thu 3= ";
	cin >> c;
	
	max = a;
	if(b>max) max = b;
	if(c>max) max = c;
	
	cout << "Gia tri lon nhat cua 3 so vua nhap la: " << max << "\n";
	cout << "Gia tri trung binh cua 3 so la: " << setprecision(3) << fixed << trung_binh(a,b,c);
	return 0;
}

float trung_binh(int a, int b, int c){
	return (float)(a+b+c)/3;
}
