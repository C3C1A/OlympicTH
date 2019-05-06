#include <iostream>
#include <cstdlib>
using namespace std;

struct temp{
		int v1;
		int v2;
		int weight;
	};
	
	struct temp t[100];

int main(){
	
	int matrix[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			matrix[i][j] = 0;
		}
	}
	
	int edge,vec,sum=0,x=0;
	int flag =-1,i,j,mark[100];
	
	cout << "Enter Vector : ";
	cin >> vec;
	cout << "Enter Edge : ";
	cin >> edge;
	cout << "Enter vector of edge 2 point and weight" << endl;
	
	for(i=1;i<=edge;i++){
		cin >> t[i].v1 >> t[i].v2 >> t[i].weight;
		matrix[t[i].v1][t[i].v2] = 1;
		matrix[t[i].v2][t[i].v1] = 1;
		x += t[i].weight;
		if(flag ==-1){
			flag = t[i].v1;
		}
	}
	
	for(i=t[i].v1;i<vec;i++){
		for(j=0;j<vec;j++){
			if(t[i].weight > t[j].weight && mark[j] != 1){
				sum += t[j].weight;
				mark[i] = 1;
			}
			else if(t[i].weight <= t[j].weight && mark[j] != 1){
				sum += t[i].weight ;
				mark[i] = 1;
			}
		}
	}
	
	cout << (sum - 1) - x;
	
	return 0;
}
