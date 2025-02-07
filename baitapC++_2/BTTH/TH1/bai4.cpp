#include <iostream>
#include <cstring>

using namespace std;

int main(){
	string str;
	cout << "Hay nhap vao mot chuoi: ";
	getline(cin, str);

	int dem=0;
	for(int i=0; i<str.size(); i++){
		if((str[i]=='i') && (str[i+1]=='t'))
			dem++;
	}
	cout << "So chuoi con it co trong chuoi tren la: " << dem;
	return 0;
}
