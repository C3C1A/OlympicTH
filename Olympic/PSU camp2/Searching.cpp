#include <iostream>
#include <cstdlib>
using namespace std;

int compare(const void *a,const void *b){
	return (*(int*)a - *(int*)b);
}

void binary(int search,int num[],int n){
	int mid,ub,lb;
	lb = 0;
	ub = n-1;
	mid = (lb + ub) / 2;
	while(lb <= ub){
		if(num[mid] > search){
			ub = mid - 1;
		}
		else if(num[mid] < search){
			lb = mid + 1;
		}
		else if(num[mid] == search ){
			break;
		}
		mid = (lb + ub) / 2;
	}
	cout << mid;
}

int main(){
	int num[100],n,i,search;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> num[i];
	}
	qsort(num,n,sizeof(int),compare);
	cin >> search;
	binary(search,num,n);
	
	return 0;
}
