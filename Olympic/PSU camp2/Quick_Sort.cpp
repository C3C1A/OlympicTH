#include <iostream>
#include <cstdlib>
using namespace std;

int quick_sort(int num[],int F,int R,int n){
	int pivot,k,temp,p;
	F = 0;
	pivot = num[F];
	R = n-1;
	while(F != R){
		if(num[F] > num[R]){
			temp = num[F];
			num[F] = num[R];
			num[R] = temp;
		}
		if(num[F] != pivot)		F++;
		else	R--;
	}
	p = F;
	for(k=0;k<n;k++){
		cout << num[k] << " ";
	}
	cout << endl;
	quick_sort(num,0,p-1,n);
	quick_sort(num,p+1,n-1,n);
}

int main(){
	int n,i,F,R;
	char ch;
	cout << "Enter number of integer : ";
	cin >> n;
	int num[500];
	cout << "Enter integer" << endl;
	for(i=0;i<n;i++){
		cin >> num[i];
	}
	cout << "Q = Quick Sort" << endl << "Please choose a command : ";
	cin >> ch;
	switch(ch){
		case 'Q' : 
		case 'q' : quick_sort(num,F,R,n);
					break;
		default : cout << "ERROR";
	}
	
	return 0;
}
