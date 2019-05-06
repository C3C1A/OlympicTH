#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int pri;
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

void insert(int list,int num){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> pri = list;
	temp -> data = num;
	
	struct node* cur = head;
	struct node* pre = NULL;
	
	if(head == NULL){
		temp -> next = NULL;
		head = temp;
	}
	else{
		while(cur -> next != NULL && head -> pri <= temp -> pri){
			if(temp -> pri >= cur -> pri){
				pre = cur;
				cur = cur -> next;
			}
			else{
				temp -> next = cur;
				pre -> next  = temp;
			}
		}

		if(temp -> pri > cur -> pri){
			temp -> next = cur -> next;
			cur -> next = temp;
		}
		else if(temp -> pri == cur -> pri){
			temp -> next = cur -> next;
			cur -> next = temp;
		}
		else{
			if(pre == NULL){
				temp -> next = head;
				head = temp;
			}
			else{
				temp -> next = pre -> next;
				pre -> next = temp;
			}
		}
	}
}

int delete_num(){
	struct node* cur = head;
	struct node* pre = NULL;
	int x;
	if(head == NULL){
		cout << "no queue to delete";
	}
	else{
		head = head -> next;
		x = cur -> data;
		free(cur);
		display();
		cur = head;
		pre = NULL;
		return x;
	}
}

int main(){
	int num,list;
	char ch;
	cout << "Menu Queue \n1 = Insert \n2 = Delete \n3 = Exit \nSelect : ";
	while(cin >> ch){
		switch(ch){
			case '1' :	cout << "Enter Priority : ";
						cin >> list;
						cout << "Enter Number : ";
						cin >> num;
						insert(list,num);
						display();
						break;
			case '2' :	delete_num();
						break;
			case '3' :	return 0;
			default : cout << "no command";
		}
	}
	
	return 0;
}
