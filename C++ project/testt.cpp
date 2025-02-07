#include <iostream>
#include <vector>
#include <cstdlib>
#include <sstream>
#define MAX 50
using namespace std;

int v,e;
bool ts = false;
vector<int> trongso;

int main(){
	bool daxet[MAX];
	vector<int> ke[1001];
	cin >> v >> e;
	
	cin.ignore();
	for(int i=0; i<e; i++){
		string s;
		char num1[MAX], num2[MAX], num3[MAX];
		getline(cin, s);
		if(s.length()==5)
			ts=true;
		stringstream ss(s);
		ss >> num1; ss >> num2;
		ke[atoi(num1)].push_back(atoi(num2));
		ke[atoi(num2)].push_back(atoi(num1));
		if(ts){
			ss >> num3;
			trongso.push_back(atoi(num3));
		}
	}

	int chiso=0;
	cout << v << "\n";
	for(int i=1; i<=v; i++){
		chiso+=ke[i].size();
		cout << chiso;
		for(int j=0; j<ke[i].size(); j++){
			cout << " " << ke[i][j];
		}
		cout << "\n";
	}
	return 0;
}
