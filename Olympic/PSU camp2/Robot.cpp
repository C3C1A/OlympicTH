#include <iostream>
#include <cstdlib>
using namespace std;

struct R{
	int weight;
	int size;
};

struct R robot[100];

int main(){
	int A,B,T,i=0,count=0,j,k;
	int a[500],b[500];
	cin >> A >> B >> T;
	for(i=0;i<A;i++)	cin >> a[i];
	for(i=0;i<B;i++)	cin >> b[i];
	for(i=0;i<T;i++)	cin >> robot[i].weight >> robot[i].size;
	i = 0;
	while(i<T){
		for(j=0;j<A;j++){
			for(k=0;k<T;k++){
				if(a[j] > robot[k].weight && robot[k].weight != -1){
					robot[k].weight = -1;
					robot[k].size = -1;
					i++;
					break;
				}
			}
		}
		for(j=0;j<B;j++){
			for(k=0;k<T;k++){
				if(b[j] > robot[k].size && robot[k].size != -1){
					robot[k].weight = -1;
					robot[k].size = -1;
					i++;;
					break;
				}
			}
		}
		count++;
		if(count>T){
			cout << "-1";
			return 0;
		}
	}
	cout << count;
	
	return 0;
}
