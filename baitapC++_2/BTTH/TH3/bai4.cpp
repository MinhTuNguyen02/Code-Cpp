#include <iostream>

using namespace std;

void showTravelers_List();
void show();

class Car{
	private:
		string brand;
		double weight;
		int seats;
		int travelers;
		string* travelers_list;
	public:	
		Car(){
			brand = "N/A";
			weight = 0;
			seats = 0;
		}
		~Car(){
			delete [] travelers_list;
		}
		void setTravelers(int trl){
			travelers = trl;
			travelers_list = new string[travelers];
			for(int i=0; i<travelers; i++){
				cout << "Enter Id #" << i+1 << " : ";
				cin >> travelers_list[i];
			}
		}
		int getTravelers(){
			return travelers;
		}
		void showTravelers_List(){
			cout << "Travelers list:\n";
			for(int i=0; i<travelers; i++){
				cout << "#" << i+1 << "'s Id: " << travelers_list[i] << "\n";
			}
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
			cout << brand << " - " << weight << " kg - " << seats << " seats - " << travelers << " travelers\n";
			showTravelers_List();
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
	int travelers;
	
	for(int i=0; i<n; i++){
		cout << "Enter Info Car " << i+1 << ":\n";
		cin.ignore(265,'\n');
		cout << "Brand: "; getline(cin, strtmp); cars[i].setBrand(strtmp);
		cout << "Weight: "; cin >> inttmp; cars[i].setWeight(inttmp);
		cout << "Seats: "; cin >> inttmp; cars[i].setSeats(inttmp);
		
		do{
			cout << "Enter travelers: ";
			cin >> inttmp;
		}while((inttmp>cars[i].getSeats()) || (inttmp<=0));
		cars[i].setTravelers(inttmp);
	}
	
	for(int i=0; i<n; i++){
		cout << "Car " << i+1 << ":\n";
		cars[i].show();
	}
	
	delete [] cars;
	return 0;
}
