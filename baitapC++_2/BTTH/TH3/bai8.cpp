#include <iostream>
#include <cmath>

using namespace std;

float distance();
void show();

class diem{
	private:
		string name;
		int x;
		int y;
	public:
		diem(){
			x = 0;
			y = 0;
		}
		void setName(string name){
			this->name = name;
		}
		string getName(){
			return name;
		}
		void setX(int x){
			this->x = x;
		}
		int getX(){
			return x;
		}
		void setY(int y){
			this->y = y;
		}
		int getY(){
			return y;
		}
		float distance(diem a){
			return sqrt(pow(a.x-x,2)+pow(a.y-y,2));
		}
		void show(){
			cout << name << "(" << x << "," << y << ")\n";
		}
};

int main(){
	int n, inttmp;
	string strtmp;
	do{
		cout << "Nhap so diem: ";
		cin >> n;
	}while(n<=0);
	diem* d = new diem[n];
	
	for(int i=0; i<n; i++){
		cout << "Nhap diem thu " << i << ":\n";
		cin.ignore(265,'\n');
		cout << "Nhap ten diem: "; getline(cin,strtmp); d[i].setName(strtmp);
		cout << "Nhap hoanh do: "; cin >> inttmp; d[i].setX(inttmp);
		cout << "Nhap tung do: "; cin >> inttmp; d[i].setY(inttmp);
	}
	
	int pointindex = -1;
	float kc, kcmin = 65535;
	for(int i=0; i<n; i++){
		kc = 0.0;
		for(int j=0; j<n; j++){
			if(i!=j){
				kc += d[i].distance(d[j]);
			}
		}
		if(kc<kcmin){
			kcmin = kc;
			pointindex = i;
		}
	}
	
	cout << "Pi =" << pointindex << ",kcmin= " << kcmin << "\n";
	cout << "Diem trong tam la: ";
	d[pointindex].show();
	
	delete [] d;
	
	return 0;
}
