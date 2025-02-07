#include <iostream>
#define MAX 100
using namespace std;

void sort(int a[MAX][3], int m);
void replace(int a[], int m, int k, int l);

int main(){
	int n;
	int MTK[MAX][MAX];
	cin >> n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> MTK[i][j];
		}
	}
	
	int canh[MAX][3], ds[MAX];
	int count=0;
	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			if(MTK[i][j]!=0){
				canh[++count][1]=MTK[i][j];
				canh[count][2]=i; canh[count][3]=j;
			}
		}
	}
//	for(int i=1; i<=count; i++){
//		for(int j=1; j<=3; j++){
//			cout << canh[i][j] << " ";
//		}
//		cout << endl;
//	}
	sort(canh,count);
//	cout << endl;
//	for(int i=1; i<=count; i++){
//		for(int j=1; j<=3; j++){
//			cout << canh[i][j] << " ";
//		}
//		cout << endl;
//	}
	
	int label=0;
	int lab1, lab2;
	int dinh[MAX];
	for(int i=1; i<=n; i++){
		dinh[i] = ++label;
	}
	
	int t=0;
	int kq[MAX][MAX]={0};
	for(int i=1; i<=count; i++){
		int j=2;
		if(t==(n-1))
			break;
		if(dinh[canh[i][j]]!=dinh[canh[i][j+1]]){
			lab1 = min(dinh[canh[i][j]],dinh[canh[i][j+1]]);
			lab2 = max(dinh[canh[i][j]],dinh[canh[i][j+1]]);
			replace(dinh,count,lab1,lab2);
			kq[canh[i][j]][canh[i][j+1]] = kq[canh[i][j+1]][canh[i][j]] = canh[i][1];
			t++;
		}
		else
			continue;
	}
	
	
	cout << n << "\n";
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout << kq[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}

void sort(int a[MAX][3], int m){
	for(int i=1; i<m; i++){
		int k=1;
		int min_idx=i;
		for(int j=i+1; j<=m; j++){
			if(a[j][k]<a[min_idx][k])
				min_idx=j;
		}
		for(;k<=3; k++){
			swap(a[i][k],a[min_idx][k]);
		}
	}
}

void replace(int a[], int m, int k, int l){
	for(int i=1; i<=m; i++){
		if(a[i]==l){
			a[i]=k;
		}
	}
}
