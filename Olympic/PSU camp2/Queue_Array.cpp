#include<iostream>
#include<cstdlib>
using namespace std;

int array[5] = {0};
int front = -1;
int rare = -1;

void display(){
	int i;
	cout << "Data : ";
	for(i=front;i<=rare;i++){
		if(array[i] == 0)	break;
		cout << array[i] << " " ;
	}
	cout << endl;
}

void enqueue(int data){
	int i;
	if(front == -1 && rare == -1){
		array[0] = data;
		front = 0;
		rare = 0;
		display();
	}
	else{
		for(i=1;i<5;i++){
			if(array[i] == 0){
				array[i] = data;
				rare = i;
				display();
				break;
			}
		}
		if(i>=5){
			cout << "overflow" << endl;
		}
	}
}

void dequeue(){
		if(front == -1 && rare == -1){
			cout << "underflow" << endl;
		}
		else{
			array[front] = 0;
			front ++;
			if(front > rare){
				front = -1;
				rare = -1;
			}
			display();
		}
}

int main(){
	int data;
	char n;
	cout << "Menu Queue \n1 = Enqueue \n2 = Dequeue \n3 = Exit \nSelect : ";
	while(cin >> n){
		switch(n){
			case '1' :	cin >> data;
						enqueue(data);
						break;
			case '2' :	dequeue();
						break;
			case '3' :	return 0;
			default : cout << "no command" << endl;
		}
	}
	
	return 0;
}
