#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node* next;
};

struct node* head = NULL;

void push(int fill){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = fill;
	
	if(head == NULL){
		temp -> next = NULL;
		head = temp;
	}
	else{
		temp -> next = head;
		head = temp;
	}
}

int pop(){
	int temp;
	struct node* cur = head;
	
	if(head == NULL){
		cout << "no data";
	}
	else if(head -> next == NULL){
		head = NULL;
		temp = cur -> data;
		free(cur);
		cout << "Stack is empty";
		return temp;
	}
	else{
		head = cur -> next;
		temp = cur -> data;
		free(cur);
		return temp;
	}
}

void top(){
	if(head == NULL){
		cout << "Empty";
	}
	else{
		cout << head -> data;
	}
}

void display(){
	struct node* cur = head;
	cout << "\nstatus of the stack is : ";
	while(cur != NULL){
		cout << cur -> data << " ";
		cur = cur -> next;
	}
	cout << endl;
}

int main(){
	int fill,x;
	char ch;
	cout << "E = Push \nP = Pop \nT = top \nEnter command : ";
	while(cin >> ch){
		switch(ch){
			case 'P' :
			case 'p' :	x = pop();
						display();
						if(head == NULL) cout << "Unable to pop." << endl;
						else cout << "Pop is : " << x << endl;
						break;
			case 'E' :
			case 'e' :	cin >> fill;
						push(fill);
						display();
						break;
			case 'T' :
			case 't' : 	top();
						break;
			default : cout << "ERROR";
		}
	}
	
	return 0;
}
