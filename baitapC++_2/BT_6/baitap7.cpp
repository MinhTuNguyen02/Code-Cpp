#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

void maxword(char s[]);

int main(){
	char s[MAX];
	cout << "Nhap chuoi ky tu s: ";
	gets(s);
	maxword(s);
	return 0;
}

void maxword(char s[]){
	char s1[MAX], s2[MAX];
	int Max=0, dem=0;
	for(int i=0; i<strlen(s); i++){
		if(s[i]!=' '){
			dem++;
			s1[dem-1]=s[i];
		}
		else{
			if(dem>Max){
				Max=dem;
				for(int j=0; j<strlen(s1); j++)
					s2[j]=s1[j];
			}
			dem=0;
		}
	}
	cout << "tu dai nhat trong chuoi la: " << s2 << "\n";
	cout << "co " << Max << " ky tu";
}
