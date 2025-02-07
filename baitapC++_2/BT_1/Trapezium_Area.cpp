#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double bigSide, littleSide, height, Area;
	cout << "Enter big side: ";
	cin >> bigSide;
	cout << "Enter little side: ";
	cin >> littleSide;
	cout << "Enter height: ";
	cin >> height;
	
	Area = height*(bigSide+littleSide)/2;
	cout << "Area: " << Area;
	return 0;
}
