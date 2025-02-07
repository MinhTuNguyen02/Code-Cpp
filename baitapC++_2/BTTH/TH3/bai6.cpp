#include <iostream>
#include <cmath>

using namespace std;

int dientich();
int chuvi();

class hinhchunhat{
	private:
		int dai;
		int rong;
	public:
		hinhchunhat(){
			dai = -1;
			rong = -1;
		}
		~hinhchunhat(){
		}
		void setDai(int d){
			dai = d;
		}
		int getDai(){
			return dai;
		}
		void setRong(int r){
			rong = r;
		}
		int getRong(){
			return rong;
		}
		int dientich(){
			return dai*rong;
		}
		int chuvi(){
			return (dai+rong)*2;
		}
		
};

int main(){
	hinhchunhat A;
	int inttmp;
	
	cout << "Nhap chieu dai hcn: ";
	cin >> inttmp; A.setDai(inttmp);
	cout << "Nhap chieu rong hcn: ";
	cin >> inttmp; A.setRong(inttmp);
	
	cout << "Dien tich hcn la: " << A.dientich() << "\n";
	cout << "Chu vi hcn la: " << A.chuvi();
	return 0;
}
