#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int left[32]={-1},right[32]={-1};
	int i,j,node[32]={0},par,index[32],n;
	char lr;
	cout << "Enter node : ";
	cin >> n;
	cout << "Enter root : ";
	cin >> node[0];
	
	cout << "New node\tParent node\tLeft or Right( L or R )" << endl;
	for(i=1;i<n;i++){
		cin >> node[i] >> par >> lr;
		switch(lr){
			case 'L'	:
			case '0'	:	
			case 'l'	:	for(j=0;j<=n;j++){
								if(par == node[j]){
									left[j] = i;
									break;
								}
							}
							break;
			
			case 'R'	:
			case '1'	:	
			case 'r'	:	for(j=0;j<=n;j++){
								if(par == node[j]){
									right[j] = i;
									break;
								}
							}
							break;
							
			default	: return 0;
		}
	}
	
	cout << "[]\tLeft\tData\tRight" << endl;
	for(i=0;i<32;i++){
		if(left[i]==0)		left[i] = -1;
		if(i<n && right[i]==0)	right[i] = -1;
		if(i>n-1)		right[i] = i+1;
		cout << i << "\t" << left[i] << "\t" << node[i] << "\t" << right[i] << endl;
	}
	
	return 0;	
}
