#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

void delblk(char[], int);
char standard(char s[]);

int main(){
	char s[MAX];
	cout << "Nhap chuoi ky tu s: ";
	gets(s);
	standard(s);
	cout << s;
	return 0;
}

void delblk(char s[], int vt){
	int n=strlen(s);
    for(int i=vt; i<n; i++)
    	s[i]=s[i+1];
	s[n-1]='\0';
}

char standard(char s[]){
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			delblk(s,i);
			i--;
		}
    if(s[0]==' ')
		delblk(s,0);
    if(s[strlen(s)-1]==' ')
		delblk(s,strlen(s)-1);
}
