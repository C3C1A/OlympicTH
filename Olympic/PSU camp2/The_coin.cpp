#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
	long long n,coin[1000],money,table[1000][100];
	int min[1000],k,x;
	int i,j;
	
	cin >> n;
	for(i=0;i<n;i++){
		cin >> coin[i];
	}
	cin >> money;
	
	for(i=1;i<=money;i++){
		for(j=1;j<=n;j++){
			if(coin[j-1] > i){
				table[i][j] = 9999;
			}
			else if(i == coin[j-1]){
				table[i][j] = 1;
			}
			else{
				x = i - coin[j-1];
				table[i][j] = 1 + min[x];
			}
		}
		min[i] = table[i][1];
		for(k=1;k<n;k++){
			if(min[i] > table[i][k+1])		min[i] = table[i][k+1];
		}
	}

	cout << endl;
	cout << min[money];
	
	return 0;
}
