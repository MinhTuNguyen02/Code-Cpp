#include <iostream>
#include <vector>
using namespace std;

vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> tmp(n,0);
        if(k==0){
            for(int i=0; i<n; i++){
                code[i] = 0;
            }
        }
        else if(k>0){
            for(int i=0; i<n; i++){
                int l=k, add=i+1, tam=0;
                while(l!=0){
                    if(add==n)
                        add=0;
                    tam += code[add];
                    add++;
                    l--;
                }
                tmp[i] = tam;
            }
        }
        else{
            for(int i=0; i<n; i++){
                int l=k, add=i-1, tam=0;
                while(l!=0){
                    if(add==-1)
                        add=n-1;
                    tmp[i] += code[add--];
                    l++;
                }
                
            }
        }

        for(int i=0; i<n; i++){
        	cout << tmp[i] << " ";
		}
    }

int main(){
	vector<int> code;
	code.push_back(2);
	code.push_back(4);
	code.push_back(9);
	code.push_back(3);
	int k=-2;
	
	decrypt(code,k);
	
	return 0;
}
