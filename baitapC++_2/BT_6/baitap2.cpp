#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

char lower(char s[]);

int main(){
	char s[MAX];
	cout << "Nhap chuoi ky tu s: ";
	gets(s);
	lower(s);
	cout << s;
	return 0;
}

char lower(char s[]){
	for(int i=0; i<strlen(s); i++){
		if((s[i]>='A') && (s[i]<='Z')){
			s[i] +=32;
		}
	}
}
