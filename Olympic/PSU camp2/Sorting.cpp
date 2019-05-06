#include <iostream>
#include <cstdlib>
using namespace std;

void bubble_sort(int number[],int n){
	int i,j,temp,k;
	cout << endl;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(number[j]>number[j+1]){
				temp = number[j];
				number[j] = number[j+1];
				number[j+1] = temp;
			}
		}
		for(k=0;k<n;k++){
			cout << number[k] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void selection_sort(int number[],int n){
	int i,j,addmin,temp,k;
	cout << endl;
	for(i=0;i<n-1;i++){
		addmin = i;
		for(j=i+1;j<n;j++){
			if(number[addmin]>number[j]){
				addmin = j;
			}
		}
		temp = number[i];
		number[i] = number[addmin];
		number[addmin] = temp;
		for(k=0;k<n;k++){
			if(k==i)		cout << " {" << number[k] << "} ";
			else cout << number[k] << " ";
		}
		cout << endl;
	}
}

void insertion_sort(int number[],int n){
	int i,j,temp,k;
	cout << endl;
	for(i=1;i<n;i++){
		temp = number[i];
		j = i - 1;
		while(j>=0 && temp <= number[j]){
			number[j+1] = number[j];
			j--;
		}
		number[j+1] = temp;
		for(k=0;k<n;k++){
			cout << number[k] << " ";
		}
		cout << endl;
	}
}

int main(){
	int n,i;
	char ch;
	cout << "Enter number of integer : ";
	cin >> n;
	int number[500];
	cout << "Enter integer" << endl;
	for(i=0;i<n;i++){
		cin >> number[i];
	}
	cout << "B = Bubble Sort" << endl << "S = Selection Sort" << endl << "I = insertion Sort" << endl << "Please choose command : ";
	cin >> ch;
	switch(ch){
		case 'B' : 
		case 'b' : bubble_sort(number,n);
					break;
		case 'S' : 
		case 's' : selection_sort(number,n);
					break;
		case 'I' : 
		case 'i' : insertion_sort(number,n);
					break;
		default : cout << "ERROR";
	}
	
	return 0;
}
