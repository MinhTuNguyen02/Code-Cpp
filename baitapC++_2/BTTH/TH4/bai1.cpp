#include <iostream>

using namespace std;

class Hinhchunhat{
	private:
		int dai;
		int rong;
	public:
		Hinhchunhat(){
			rong = dai;
		}
		~Hinhchunhat(){
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
		int DienTich(){
			return dai*rong;
		}
		int ChuVi(){
			return (dai+rong)*2;
		}
};

class Hinhvuong : public Hinhchunhat{
	public:
		Hinhvuong(){
			setRong(1);
			setDai(1);
		}
		~Hinhvuong(){
		}
};

int main(){
	int n;
	do{
		cout << "Nhap canh hinh vuong: ";
		cin >> n;
	}while(n<=0);
	Hinhchunhat A;
	A.setDai(n);
	A.setRong(n);
	
	
	cout << "1. Dien tich hinh vuong: " << A.DienTich() << "\n";
	cout << "2. Chu vi hinh vuong: " << A.ChuVi();
	
	return 0;
}
