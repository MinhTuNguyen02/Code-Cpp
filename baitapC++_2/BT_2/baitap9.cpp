#include <iostream>
#include <cmath>
using namespace std;

int main(){
	char player1, player2;
	do{
		cout << "Nguoi choi 1: ";
		cin >> player1;
		cout << "Nguoi choi 2: ";
		cin >> player2;
	}while((player1!='K') && (player1!='B') && (player1!='O') || (player2!='K') && (player2!='B') && (player2!='O'));
	
	if((player1=='K') && (player2=='K')) cout << "Hoa";
	if((player1=='K') && (player2=='B')) cout << "Nguoi choi 2 thang";
	if((player1=='K') && (player2=='O')) cout << "Nguoi choi 1 thang";
	
	if((player1=='B') && (player2=='K')) cout << "Nguoi choi 1 thang";
	if((player1=='B') && (player2=='B')) cout << "Hoa";
	if((player1=='B') && (player2=='O')) cout << "Nguoi choi 2 thang";
	
	if((player1=='O') && (player2=='K')) cout << "Nguoi choi 2 thang";
	if((player1=='O') && (player2=='B')) cout << "Nguoi choi 1 thang";
	if((player1=='O') && (player2=='O')) cout << "Hoa";
	return 0;
}
