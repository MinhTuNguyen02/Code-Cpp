#include <iostream>
#include <vector>
#include <cstdlib>
#include <sstream>
#define MAX 100
using namespace std;

int main(){
	int v,e;
	int init[MAX];
	vector<int> ke[1001];
	vector<int> ts[1001]; 
	string s;
	bool trongso;
	
	cin >> v >> e;
	cin.ignore();
	int phantu=0;
	for(int i=0; i<e; i++){
		string s;
		char num[MAX];
		getline(cin, s);
		stringstream ss (s);
		while(ss >> num){
			init[++phantu]=atoi(num);
		}
	}
	
	if(phantu==e*2)
		trongso=false;
	else if(phantu==e*3)
		trongso=true;

	if(trongso==false){
		bool vohuong=true;
		for(int i=1; i<phantu/2; i+=2){
			for(int j=i+2; j<phantu; j+=2){
				if((init[i]==init[j+1]) && (init[i+1]==init[j]))
					vohuong=false;
			}
		}
		for(int i=1; i<=phantu; i+=2){
			ke[init[i]].push_back(init[i+1]);
			if(vohuong==true){
				ke[init[i+1]].push_back(init[i]);
			}
		}
	}
	else{
		bool vohuong=true;
		for(int i=1; i<phantu/3; i+=3){
			for(int j=i+3; j<phantu; j+=3){
				if((init[i]==init[j+1]) && (init[i+1]==init[j]))
					vohuong=false;
			}
		}
		for(int i=1; i<=phantu; i+=3){
			ke[init[i]].push_back(init[i+1]);
			if(vohuong==true){
				ke[init[i+1]].push_back(init[i]);
			}
		}
		for(int i=1; i<=phantu; i+=3){
			ts[init[i]].push_back(init[i+2]);
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
	
	if(trongso){
		chiso=0;
		for(int i=1; i<=v; i++){
			chiso+=ts[i].size();
			cout << chiso;
			for(int j=0; j<ts[i].size(); j++){
				cout << " " << ts[i][j];
			}
			cout << "\n";
		}
	}
	return 0;
}

 
