#include <iostream>

using namespace std;

void show();

class Car{
	public:
		string brand;
		double weight;
		int seats;
		
		Car(){
			brand = "N/A";
			weight = 0;
			seats = 0;
		}
		~Car(){
		}
		void show(){
			cout << brand << " - " << weight << " kg - " << seats << " seats\n"; 
		}
};


int main(){
	Car car1, car2, car3;
	
	cout << "Enter Info Car 1:\n";
	cout << "Brand: "; getline(cin,car1.brand);
	cout << "Weight: ";	cin >> car1.weight;
	cout << "Seats: "; cin >> car1.seats;
	
	cout << "Enter Info Car 2:\n";
	cin.ignore(265,'\n');
	cout << "Brand: "; getline(cin,car2.brand);
	cout << "Weight: "; cin >> car2.weight;
	cout << "Seats: "; cin >> car2.seats;
	
	cout << "Enter Info Car 3:\n";
	cin.ignore(265,'\n');
	cout << "Brand: "; getline(cin,car3.brand);
	cout << "Weight: "; cin >> car3.weight;
	cout << "Seats: "; cin >> car3.seats;
	
	car1.show();
	car2.show();
	car3.show();
	return 0;
}
