#include<iostream>
#include<cstdlib>
using namespace std;

struct node {
	char data[100];
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

char pop(){
	int temp;
	struct node* cur = head;
	
	if(head == NULL);
	else if(head -> next == NULL){
		head = NULL;
		temp = cur -> data;
		free(cur);
		return temp;
	}
	else{
		head = cur -> next;
		temp = cur -> data;
		free(cur);
		return temp;
	}
}

int main(){
	char ch[100]
	cin >> ch;
	for(){
		if()
	}
	
	return 0;
}
