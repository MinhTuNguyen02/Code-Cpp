#include <iostream>
#include <sstream>
#include <cstdlib>
#define MAX 50
using namespace std;

int main(){
	string s;
	char num[MAX];
	getline(cin, s);
	stringstream ss(s);
	ss >> num;
	while(ss >> num){
		cout << num << "\n";
	}


	return 0;
}
