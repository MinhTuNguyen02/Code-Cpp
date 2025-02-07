#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

char proper(char s[]);

int main(){
	char s[MAX];
	cout << "Nhap chuoi ky tu s: ";
	gets(s);
	proper(s);
	cout << s;
	return 0;
}

char proper(char s[]){
	((s[0]>='a') && (s[0]<='z')) ? s[0] -=32 : s[0];
	
	for(int i=1; i<strlen(s); i++){
		if((s[i]==' ') && (s[i+1]>='a') && (s[i+1]<='z'))
			s[i+1] -= 32;
	}
}
