#include <iostream>
#include <cstdlib>
using namespace std;

int array[5] = {0};
int front = -1;
int rare = -1;
int Qmax = 0;

void display(){
	int i;
	cout << "Data : ";
	if(front==0&&rare==0){
		cout << array[0] << endl;
	}
	else if(front<rare){
		for(i=front;i<=rare;i++){
			if(array[i] == 0)	break;
			cout << array[i] << " " ;
		}
	}
	else if(rare<front){
		for(i=front;i<5;i++){
			cout << array[i] << " ";
		}
		for(i=0;i<=rare;i++){
			cout << array[i] << " ";
		}
	}
	else{
		cout << endl;
	}
}

int insert(int data){
	int i;
	if(front == -1 && rare == -1){
		array[0] = data;
		front = 0;
		rare = 0;
		Qmax++;
		display();
	}
	else{
		if(Qmax>=5){
			cout << "overflow" << endl;
			return 0;
		}
		if(rare == 4){
			rare = 0;
		}
		for(i=rare;;i++){
			if(array[i] == 0){
				array[i] = data;
				rare = i;
				Qmax++;
				display();
				break;
			}
		}
	}
}

void delete_num(){
		if(front == -1 && rare == -1){
			cout << "underflow" << endl;
		}
		else{
			array[front] = 0;
			front ++;
			if(front > 4){
				front = 0;
			}
			Qmax--;
			if(front > rare){
				if(array[rare] == 0){
					front = -1;
					rare = -1;
				}
			}
			display();
		}
}

int main(){
	int data;
	char n;
	cout << "Menu Queue \n1 = Insert \n2 = Delete \n3 = Exit \nSelect : ";
	while(cin >> n){
		switch(n){
			case '1' :	cin >> data;
						insert(data);
						break;
			case '2' :	delete_num();
						break;
			case '3' :	return 0;
			default : cout << "no command" << endl;
		}
	}
	
	return 0;
}
