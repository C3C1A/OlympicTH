#include <iostream>
#include <cstdlib>
using namespace std;

struct point{
	int x;
	int y;
};

struct point p[10000];

int compare(const void* a,const void* b){
	struct point* A = (struct point*)a;
	struct point* B = (struct point*)b;
	return ((A -> x) - (B -> x));
}

int main(){
	int n,z=0;
	int i;
	
	cin >> n;
	for(i=0;i<n;i++){
		cin >> p[i].x >> p[i].y;
	}
	
	qsort(p,n,sizeof(struct point),compare);
	
	for(i=1;i<n;i++){
		if(p[i].x > p[i-1].x && p[i].y > p[i-1].y){
			p[i-1].x = -1;
			p[i-1].y = -1;
		}
	}
	
	cout << endl;
	for(i=0;i<n;i++){
		if(p[i].x == -1 || p[i].x == 0);
		else{
			cout << p[i].x << " " << p[i].y << endl;
		}
	}
	
	return 0;
}
