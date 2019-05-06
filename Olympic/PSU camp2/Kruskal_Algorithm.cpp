#include <iostream>
#include <cstdlib>
using namespace std;

struct temp{
		int v1;
		int v2;
		int weight;
	};
	
	struct temp t[100];

int compare(const void *a,const void *b){
	struct temp* A = (struct temp*) a;
	struct temp* B = (struct temp*) b;
	return ((A -> weight) - (B -> weight));
}

int main(){
	
	int matrix[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			matrix[i][j] = 0;
		}
	}
	
	int edge,vector;
	int flag[100],i;
	
	flag[0] = -1;
	cout << "Enter Vector : ";
	cin >> vector;
	cout << "Enter Edge : ";
	cin >> edge;
	cout << "Enter vector of edge 2 point and weight" << endl;
	
	for(i=0;i<edge;i++){
		cin >> t[i].v1 >> t[i].v2 >> t[i].weight;
		matrix[t[i].v1][t[i].v2] = 1;
		matrix[t[i].v2][t[i].v1] = 1;
		if(flag[0]==-1){
			flag[0] = t[i].v1;
		}
	}
	
	qsort(t,100,sizeof(struct temp),compare);
	
	return 0;
}
