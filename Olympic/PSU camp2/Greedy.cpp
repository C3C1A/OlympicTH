#include <iostream>
#include <cstdlib>
using namespace std;

void greedy_1(int v[],int w[]){
	double sum = 0,x,money=0;
	int i,a;
	double max,r,b,temp;
	max = v[0];
	a = 0;
	while(sum < 100){
		max = v[0];
		for(i=0;i<5;i++){
			if(v[i] == b);
			else if(max < v[i]){
					max = v[i];
					a = i;
			}
			b = max;
		}
		sum += w[a];
		if(sum >= 100){
			temp = sum - 100;
			r = temp / b;
			max = v[a] - (r * v[a]);
		}
		money += max;
		v[a] = 0;
	}
	cout << money;
}

int main (){
	int v[5],w[5],z[5];
	int i;
	cout << "Enter Price and Weight" << endl;
	for(i=0;i<5;i++){
		cin >> v[i];
		cin >> w[i];
		z[i] = v[i] / w[i];
	}
	greedy_1(v,w);
	
	
	return 0;
}
