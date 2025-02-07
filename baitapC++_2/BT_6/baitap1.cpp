#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

char upper(char s[]);

int main(){
	char s[MAX];
	cout << "Nhap chuoi ky tu s: ";
	gets(s);
	upper(s);
	cout << s;
	return 0;
}

char upper(char s[]){
	for(int i=0; i<strlen(s); i++){
		if((s[i]>='a') && (s[i]<='z')){
			s[i] -=32;
		}
	}
}
