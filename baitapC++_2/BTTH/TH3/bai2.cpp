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
	Car car1, car2, car3;
	string strtmp;
	int inttmp;
	
	cout << "Enter Info Car 1:\n";
	cout << "Brand: "; getline(cin,strtmp); car1.setBrand(strtmp);
	cout << "Weight: "; cin >> inttmp; car1.setWeight(inttmp);
	cout << "Seats: "; cin >> inttmp; car1.setSeats(inttmp);
	
	cout << "Enter Info Car 2:\n";
	cin.ignore(256,'\n');
	cout << "Brand: "; getline(cin,strtmp); car2.setBrand(strtmp);
	cout << "Weight: "; cin >> inttmp; car2.setWeight(inttmp);
	cout << "Seats: "; cin >> inttmp; car2.setSeats(inttmp);
	
	cout << "Enter Info Car 3:\n";
	cin.ignore(256,'\n');
	cout << "Brand: "; getline(cin,strtmp); car3.setBrand(strtmp);
	cout << "Weight: "; cin >> inttmp; car3.setWeight(inttmp);
	cout << "Seats: "; cin >> inttmp; car3.setSeats(inttmp);
	
	car1.show();
	car2.show();
	car3.show();
	return 0;
}
