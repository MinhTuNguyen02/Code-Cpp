#include <iostream>
#include <cmath>

using namespace std;

void ChristianGoldbach();

int main(){
	ChristianGoldbach();
	return 0;
} 

void ChristianGoldbach(){
	int k=0;
	int *snt = new int;
	if(snt==NULL) exit(1);
	for(int i=2; i<100; i++){
		int uoc=0;
		for(int j=2; j<=sqrt(i); j++){
			if(i%j==0)
				uoc++;
		}
		if(uoc==0){
			snt[k]=i;
			k++;
		}
	}
	
	for(int p=4; p<=98; p+=2){
		int a=0, b=0;
		while(1){
			if(snt[a]+snt[b]==p){
				cout << p << " = " << snt[a] << " + " << snt[b] << "\n";
				break;
			}
			else if(snt[a]+snt[b]<p)
				b++;
			else{
				a++;
				b=a;
			}
		}
	}
	delete [] snt;
}


