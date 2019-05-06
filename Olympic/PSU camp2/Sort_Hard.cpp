#include <iostream>
using namespace std;

int main(){
	int n,i,num,temp[32768],j;
	cin >> n;
	for(i=0;i<32768;i++){
		temp[i] = 0;
	}

	for(i=0;i<n;i++){
		cin >> num;
		temp[num]++;
	}

	for(i=0;i<32768;i++){
		for(;temp[i]>0;temp[i]--){
			cout << i << " ";
		}
	}
	
	return 0;
}
