#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int root[64]={-1};
	int i,j,node,par;
	char lr;
	cout << "Enter vector : ";
	cin >> root[0];
	cout << "Enter root : ";
	cin >> root[1];
	
	cout << "New node\tParent node\tLeft or Right( L or R )" << endl;
	for(i=1;i<root[0];i++){
		cin >> node >> par >> lr;
		switch(lr){
			case 'L'	:
			case '0'	:	
			case 'l'	:	for(j=1;j<=root[0];j++){
								if(par == root[j]){
									root[j*2] = node;
									break;
								}
							}
							break;
			
			case 'R'	:
			case '1'	:	
			case 'r'	:	for(j=1;j<=root[0];j++){
								if(par == root[j]){
									root[(j*2)+1] = node;
									break;
								}
							}
							break;
							
			default	: return 0;
		}
		
	}
	for(i=0;i<32;i++){
		cout << root[i] << " ";
	}
	
	return 0;
}
