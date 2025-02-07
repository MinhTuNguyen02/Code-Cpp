#include <iostream>
#include <cmath>

using namespace std;

class Tam_giac{
	private:
		double Canhday, Chieucao;
	public:
		Tam_giac(){
			Canhday=1;
			Chieucao=1;
		}
		~Tam_giac(){
		}
		void setCanhday(double cd){
			Canhday = cd;
		}
		double getCanhday(){
			return Canhday;
		}
		void setChieuCao(double cc){
			Chieucao = cc;
		}
		double getChieucao(){
			return Chieucao;
		}
		double DienTich(){
			return (Canhday*Chieucao)/2;
		}
};

int main(){
	int n, cd, cc;
	do{
		cout << "Nhap so luong tam giac: ";
		cin >> n;
	}while(n<=0);
	Tam_giac* tg = new Tam_giac[n];
	
	for(int i=0; i<n; i++){
		cin.ignore(265,'\n');
		do{
			cout << "Nhap tam giac thu " << i << ":\n";
			cout << "Nhap canh day tam giac: "; cin >> cd;
			cout << "Nhap chieu cao tam giac: "; cin >> cc;
		}while((cd<=0) || (cc<=0));
		tg[i].setCanhday(cd);
		tg[i].setChieuCao(cc);
	}
	
	double max = tg[0].DienTich();
	int flag=0;
	for(int i=1; i<n; i++){
		if(tg[i].DienTich()>max){
			max = tg[i].DienTich();
			flag=i; 
		}
	}
	
	cout << "Tam giac co dien tich lon nhat la tam giac thu " << flag << "; Dien tich: " << max;
	delete [] tg;
	return 0;
}
