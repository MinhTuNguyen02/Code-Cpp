#include <iostream>

using namespace std;

class So_nguyen_duong{
	private:
		int Giatri;
	public:
		So_nguyen_duong(){
			Giatri = 1;
		}
		~So_nguyen_duong(){
		}
		void setGiatri(int gt){
			Giatri = gt;
		}
		int getGiatri(){
			return Giatri;
		}
		int GiaiThua(){
			int gt=1;
			for(int i=Giatri; i>0; i--){
				gt *= i;
			}
			return gt;
		}
};

int main(){
	int n, inttmp;
	do{
		cout << "Nhap so luong so nguyen duong: ";
		cin >> n;
	}while(n<=0);
	So_nguyen_duong* snd = new So_nguyen_duong[n];
	
	for(int i=0; i<n; i++){
		cin.ignore(265,'\n');
		do{
			cout << "Nhap so thu " << i+1 << ": ";
			cin >> inttmp;
		}while(inttmp<=0);
		snd[i].setGiatri(inttmp);
	}
	
	int tong=0;
	for(int i=0; i<n; i++){
		tong += snd[i].GiaiThua();
	}
	cout << "Tong giai thua cua " << n << " so nguyen duong la: " << tong;
	
	delete [] snd;
	return 0;
}
