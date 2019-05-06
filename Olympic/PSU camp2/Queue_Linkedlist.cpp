#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node* next;
};

struct node* head = NULL;

void display(){
	struct node* cur = head;
	cout << "\nData : ";
	while(cur != NULL){
		cout << cur -> data << " ";
		cur = cur -> next;
	}
	cout << endl;
}

void enqueue(int num){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = num;
	
	struct node* cur = head;
	if(head == NULL){
		temp -> next = NULL;
		head = temp;
	}
	else{
		while(cur -> next != NULL){
			cur = cur -> next;
		}
		temp -> next = NULL;
		cur -> next = temp;
	}
}

int dequeue(){
	int x;
	struct node* cur = head;
	if(head == NULL);
	else{
		head = head -> next;
		x = cur -> data;
		free(cur);
		return x;
	}
}

int main(){
	int num;
	char ch;
	cout << "Menu Queue \n1 = Enqueue \n2 = dequeue \n3 = Exit \nSelect : ";
	while(cin >> ch){
		switch(ch){
			case '1' :	cin >> num;
						enqueue(num);
						display();
						break;
			case '2' :	dequeue();
						display();
						break;
			case '3' :	return 0;
			default : cout << "no command";
		}
	}
	
	return 0;
}
