#include <iostream>
#include <cmath>

using namespace std;

float tinh_tb();
void show();

class Thisinh{
	private:
		string hoten;
		int somonthi;
		float *diem;
		float trungbinh;
		int flag;
	public:
		Thisinh(){
			hoten = "N/A";
		}
		~Thisinh(){
			delete [] diem;
		}
		int getFlag(){
			return flag;
		}
		void setHoten(string t){
			hoten = t;
		}
		string getHoten(){
			return hoten;
		}
		void setSomonthi(int s){
			somonthi = s;
			diem = new float[somonthi];
			flag=1;
			for(int i=0; i<somonthi; i++){
				do{
					cout << "Nhap diem mon " << i+1 << ": ";
					cin >> diem[i];
				}while((diem[i]<0) || (diem[i]>10));
				if(diem[i]==0) flag=0;
			}
		}
		int getSomonthi(){
			return somonthi;
		}
		float tinh_tb(){
			float tb=0;
			for(int i=0; i<somonthi; i++){
				tb += diem[i];
			}
			trungbinh = tb/somonthi;
		}
		float getTrungbinh(){
			return trungbinh;
		}
		void show(){
			cout << "Ho va ten: " << hoten << "\n";
			cout << "So mon thi: " << somonthi << "\n";
			for(int i=0; i<somonthi; i++){
				cout << "Diem thi mon thu " << i+1 << ": " << diem[i] << "\n";
			}
			cout << "Trung binh: " << getTrungbinh() << "\n";
		}
};

int main(){
	string strtmp;
	int n, inttmp;
	do{
		cout << "Nhap so thi sinh: ";
		cin >> n;
	}while(n<=0);
	Thisinh* ts = new Thisinh[n];
	
	for(int i=0; i<n; i++){
		cout << "Nhap thi sinh thu " << i+1 << ":\n";
		cin.ignore(256,'\n');
		cout << "Nhap ho va ten: "; getline(cin, strtmp); ts[i].setHoten(strtmp);
		cout << "Nhap so mon thi: "; cin >> inttmp; ts[i].setSomonthi(inttmp);
		ts[i].tinh_tb();
	}
	
	cout << "Danh sach thi sinh trung tuyen:\n";
	for(int i=0; i<n; i++){
		if((ts[i].getTrungbinh()>=5) && (ts[i].getFlag()==1)){
			ts[i].show();
		}
	}
	
	delete [] ts;
	return 0;
}
