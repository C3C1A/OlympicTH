#include<iostream>
#include<cstdlib>
using namespace std;
struct node {
	struct node* prev;
	int data;
	struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL

void insert_begin(int DATA){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = DATA;
	if(head == NULL){
		temp -> next = NULL;
		head = temp;
		tail = head;
		temp -> prev = NULL;
	}
	else{
		head -> prev = temp;
		temp -> prev = NULL
		head = temp;
		head -> next = tail;
	}
}

void insert_back(int DATA){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = DATA;
	
	struct node* cur = head;
	if(head == NULL){
		insert_begin(DATA);
	}
	else{
		while(cur -> next != NULL){
			cur = cur -> next;
		}
		temp -> next = NULL;
		cur -> next = temp;
		temp -> prev = tail;
		tail = temp;
	}
}

void insert_sort(int DATA){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = DATA;
	
	struct node* cur=head;
	struct node* pre=NULL;
	if(head == NULL){
		insert_begin(DATA);
	}
	else{
		while(cur != NULL && cur -> data < DATA){
			pre = cur;
			cur = cur -> next;
		}
		if(pre == NULL){
			temp -> next = cur;
			head = temp;
		}
		else{
			temp -> next = cur;
			pre -> next = temp;
		}
	}
}

void delete_num(int DATA){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = DATA;
	
	struct node* cur = head;
	struct node* pre = NULL;
	if(head == NULL){
		cout << "no data to delete\n";
	}
	else if(cur -> data == DATA){
		if(cur -> next == NULL){
			head = NULL;
			tail = NULL;
			free(cur);
			cout << "Empty";
		}
		else{
			while(pre -> next != NULL && pre != DATA){
				pre = cur;
				cur = cur -> next;
			}
			head = cur -> next;
			cur -> prev = NULL;
		}
	}
	else{
		while(cur -> data != DATA && cur != NULL){
			pre = cur;
			cur = cur -> next;
			if(cur == NULL){
				cout << "no data to delete\n";
				break;
			}
		}
		if(cur -> data == DATA){
			tail = cur -> prev;
			pre -> next = cur -> next;
			free(cur);
		}
	}
}

void search(int DATA){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = DATA;
	
	struct node* cur = head;
	while(cur != NULL && cur -> data != DATA){
		cur = cur -> next;
	}
	if(cur -> data == DATA)	cout << "find";
	else	cout << "not find";
}

void display(){
	struct node* cur = head;
	cout << "\nstatus of the linked list is : ";
	while(cur != NULL){
		cout << cur -> data << " ";
		cur = cur -> next;
	}
	cout << endl;
}

int main(){
	char ch;
	int fill;
	int choice = 1;
	struct node* DATA = head;
	struct node* first=0;
	struct node* temp=0;

	while(choice){		//Input started item
		DATA = (struct node*)malloc(sizeof(struct node));
		cout << "Input Item : ";
		cin >> DATA -> data;
		DATA -> next = NULL;
		insert_sort(DATA -> data);
		cout << "Do you want to continue ? ( 0 or 1 )\n";
		cin >> choice;
	}
	
	display();
	
	cout << "\n\nI = Insert begin \nB = Insert back \nD = Delete \nS = Search \nEnter command : ";
	while(cin >> ch){
	switch(ch){
		case 'I' : 
		case 'i' : cout << "input Item : ";
					cin >> fill;
					insert_begin(fill);
					display();
					break;
		case 'B' :
		case 'b' : cout << "input Item : ";
					cin >> fill;
					insert_back(fill);
					display();
					break;
		case 'D' :
		case 'd' : cout << "input Item : ";
					cin >> fill;
					delete_num(fill);
					display();
					break;
		case 'S' :
		case 's' : cout << "input Item : ";
					cin >> fill;
					search(fill);
					break;
		default : cout << "EROR";
	}
	}
	
	return 0;
}
