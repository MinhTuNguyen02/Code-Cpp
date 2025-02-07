#include <iostream>
#define Max 50
using namespace std;

int main(){
	int MTK[Max][Max];
    int M;
    cout << "Nhap M: ";
    cin >> M;
    
	int count=0;
	bool trongso=false;
	
	for(int i=1; i<=M; i++){
		for(int j=1; j<=M; j++){
				cin >> MTK[i][j];
				if(MTK[i][j]!=0)
					count++;
				if(MTK[i][j]!=1 && MTK[i][j]!=0)
					trongso=true;
		}
	}
	
	bool vohuong=true;
	int canh=0;
	
	for(int i=1; i<=M; i++){
		for(int j=i+1; j<=M; j++){
			if(MTK[i][j]!=MTK[j][i])
				vohuong=false;
		}
	}
	
	if(vohuong==true){
		canh=count/2;
		cout << M << " " << canh << "\n";
		for(int i=0; i<=M; i++){
			for(int j=i+1; j<=M; j++){
				if(MTK[i][j]!=0){
					cout << i << "\t" << j;
					(trongso==false)?cout<<"\n":cout<<"\t"<<MTK[i][j]<<"\n";
				}
			}
		}
	}
	else{
		canh=count;
		cout << M << " " << canh << "\n";
		for(int i=1; i<=M; i++){
			for(int j=1; j<=M; j++){
				if(MTK[i][j]!=0){
					cout << i << "\t" << j;
					(trongso==false)?cout<<"\n":cout<<"\t"<<MTK[i][j]<<"\n";
				}
			}
		}
	}
    return 0;
}

