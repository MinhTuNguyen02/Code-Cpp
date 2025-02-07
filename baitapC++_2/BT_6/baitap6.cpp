#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

void countwords(char s[]);

int main(){
	char s[MAX];
	cout << "Nhap chuoi ky tu s: ";
	gets(s);
	countwords(s);
	return 0;
}

void countwords(char s[]){
	int dem = (s[0]!=' ');
	for(int i=0; i<strlen(s); i++){
		if(s[i]=='\0') break;
		if((s[i]==' ') && (s[i+1]!=' ') && (s[i+1]!='\0'))
			dem++;
		if((s[i]!=' ') && (s[i+1]!=' ')){
			cout << s[i];
		}
		else if((s[i]!=' ') && (s[i+1]==' '))
			cout << s[i] << "\n";
	}
	cout << "\nco " << dem << " tu trong chuoi s";
}
