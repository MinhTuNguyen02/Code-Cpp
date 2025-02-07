#include <iostream>
#include <cstring>
#include <vector>
using namespace std;



int main(){
	int nums[] = {1,12,-5,-6,50,3};
	int k=4;
	double maxAvg=-9999;

	for(int i=0; i<6-k+1; i++){
		double tong=0;
		for(int j=i; j<k+i; j++){
			tong+=nums[j]/double(k);
		}

		if(maxAvg<tong) maxAvg=tong;
	}
	
	cout << maxAvg;
	return 0;
}
