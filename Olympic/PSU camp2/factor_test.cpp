#include<iostream>
#include<cstdlib>
using namespace std;

struct node {
	char data;
	struct node* next;
};

struct node* head = NULL;

char top(){
	return head -> data;
}

void push(char fill){
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
	char temp;
	struct node* cur = head;
	
	if(head -> next == NULL){
		head = NULL;
		free(cur);
	}
	else{
		head = cur -> next;
		free(cur);
	}
}

char _pair(char fill){
	if(fill == ')')	return '(';
	else if(fill == ']')	return '[';
	else if(fill == '}')	return '{';
}

int main(){
	int i;
	char ch[100];
	cin >> ch;
	for(i=0;i<100;i++){
		if(ch[i] == '(' || ch[i] == '{' || ch[i] == '['){
			push(ch[i]);
		}
		else if(ch[i] == ')' || ch[i] == '}' || ch[i] == ']'){
			if(top() == _pair(ch[i])){
				pop();
			}
			else if(head == NULL){
				push(ch[i]);
				cout << "debug";
				break;
			}
		}
	}
	if(head == NULL)	cout << "Factor test is correct.";
	else	cout << "Factor test is false.";
	
	return 0;
}
