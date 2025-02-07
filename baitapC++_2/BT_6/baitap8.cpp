#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

void xtrnstart(char s[]);
void xtrnend(char s[]);
void xtrnpos(char s[], int pos);

int main(){
	char s[MAX];
	int pos;
	cout << "Nhap chuoi ky tu s: ";
	gets(s);
	xtrnstart(s);
	xtrnend(s);
	
	do{
		cout << "Nhap vi tri can trich ra: ";
		cin >> pos;
	}while((pos<0) || (pos>strlen(s)));
	xtrnpos(s,pos);
	return 0;
}

void xtrnstart(char s[]){
	int n;
	do{
		cout << "Nhap n ky tu dau tien can trich ra: ";
		cin >> n;
	}while((n<0) || (n>strlen(s)));
	for(int i=0; i<n; i++){
		cout << s[i];
	}
	cout << "\n";
}

void xtrnend(char s[]){
	int n;
	do{
		cout << "Nhap n ky tu cuoi cung can trich ra: ";
		cin >> n;
	}while((n<0) || (n>strlen(s)));
	for(int i=strlen(s)-n; i<strlen(s); i++){
		cout << s[i];
	}
	cout << "\n";
}

void xtrnpos(char s[], int pos){
	int n;
	do{
		cout << "Nhap n ky tu can trich ra: ";
		cin >> n;
	}while((n<0) || (n>strlen(s)-pos));
	for(int i=pos; i<n+pos; i++){
		cout << s[i];
	}
	cout << "\n";
}
