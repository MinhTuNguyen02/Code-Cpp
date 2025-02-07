#include <iostream>
#include <string>

using namespace std;

class A{
	int x;
public:
	A() : x(2){}
	
	void display(){
		cout << "x = " << x;
	}
};

class B : private A{
	int y;
public:
	B() : y(3){
	}
	void display(){
		A::display();
		cout << " y = " << y;
	}
};

int main(){
	B* b = new B();
	b->display();
	return 0;
}
