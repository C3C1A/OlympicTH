#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int table[100][100],n,coin[1000],money;
	int i,j,k,x,count[1000];
	
	cin >> n;
	for(i=0;i<n;i++){
		cin >> coin[i];
	}
	cin >> money;
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			table[i][j] = 0;
		}
	}
	
	for(i=0;i<=money;i++){
		for(j=1;j<=n;j++){
			if( i==0 && j==1 ){
				table[i][j] = 1;
				break;
			}
			else if(coin[j-1] == i){
				table[i][j] = 1;
				break;
			}
			else if(coin[0] > i)	break;
			else{
				x = i - coin[j-1];
				for(k=1;k<=j;k++){
					table[i][j] += table[x][k];
				}
			}
		}
		count[i] = 0;
		for(k=1;k<=n;k++){
			count[i] += table[i][k];
		}
	}
	cout << endl;
	cout << count[money];
	
	return 0;
}
