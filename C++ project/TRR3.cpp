#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
#define MAX 50
using namespace std;

int n,m;
int MTK[1001][1001];

int main(){
	ifstream ifs("input.txt");
	ifs >> n;
	ifs.ignore();
	int i=1, j=1, k=1, flag=0, tam=0;
	for(string s; getline(ifs,s);){
		char num[MAX];
		char tmp[MAX];
		stringstream ss(s);
		ss >> tmp;
		cout << tmp << " " << tam << "\n";
		if(atoi(tmp)==tam){
			i++;
			continue;
		}
		else if(i<=n && atoi(tmp)>tam){
			while(ss >> num){
				MTK[i][atoi(num)] = 1;
			} 
			i++;
		}
		else{
			
			while(ss >> num){
				while(j<=n){
					while(k<=n){
						if(MTK[j][k]!=0){
							MTK[j][k] = atoi(num); 
							flag=1;
							break;
						}
						else{
							k++;
						}
					}
					if(flag==1){
						flag=0;
						k++;
						break;
					}
					if(flag==0){
						j++;
					}
				}
				if(k>n){
					j++;
					k=0;
				}
			}
		}
		tam=atoi(tmp);
	}
	
	cout << n << "\n";
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			cout << MTK[i][j] << " "; 
		}
		cout << "\n";
	}
	return 0;
}
