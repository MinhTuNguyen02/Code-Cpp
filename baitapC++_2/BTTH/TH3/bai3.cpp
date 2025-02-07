#include <iostream>

using namespace std;

void show();

class Car{
	private:
		string brand;
		double weight;
		int seats;
	public:	
		Car(){
			brand = "N/A";
			weight = 0;
			seats = 0;
		}
		~Car(){
		}
		void setBrand(string b){
			brand = b;
		}
		string getBrand(){
			return brand;
		}
		void setWeight(int w){
			weight = w;
		}
		int getWeight(){
			return weight;
		}
		void setSeats(int s){
			seats = s;
		}
		int getSeats(){
			return seats;
		}
		void show(){
			cout << brand << " - " << weight << " kg - " << seats << " seats\n";
		}
};

int main(){
	string strtmp;
	int inttmp, n;
	do{
		cout << "Enter n: ";
		cin >> n;
	}while(n<=0);
	Car *cars = new Car[n];
	
	for(int i=0; i<n; i++){
		cout << "Enter Info Car " << i+1 << ":\n";
		cin.ignore(265,'\n');
		cout << "Brand: "; getline(cin, strtmp); cars[i].setBrand(strtmp);
		cout << "Weight: "; cin >> inttmp; cars[i].setWeight(inttmp);
		cout << "Seats: ";  cin >> inttmp; cars[i].setSeats(inttmp);
	}
	
	for(int i=0; i<n; i++){
		cout << "Xe " << i+1 << ":\n";
		cars[i].show();
	}
	
	delete [] cars;
	return 0;
}
