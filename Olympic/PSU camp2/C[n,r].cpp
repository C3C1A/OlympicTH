#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n,r,c[100][100];
	int i,j;
	cin >> n >> r;
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			if(j==i || j==0){
				c[i][j] = 1;
			}
			else{
				c[i][j] = c[i-1][j-1] + c[i-1][j];
			}
		}
	}
	cout << c[n][r];
	
	return 0;
}
