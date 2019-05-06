#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;

struct node* insertB(NODE *first,NODE *pnew){
	NODE *cur;
	cur = first;
	while(cur -> next != NULL){
		cur = cur -> next;
	}
	cur -> next = pnew;
	cur = pnew;
	cur -> next = NULL;
	return first;
}

struct node* insertF(NODE *first,NODE *pnew){
	pnew -> next = first;
	first = pnew;
	return first;
}

int main(){
	NODE *pnew,*first,*temp = 0,*last;
	int count = 0;
	int choice = 1;
	first = 0;
	
	while(choice){ //Input started item
		pnew = (NODE *)malloc(sizeof(NODE));
		cout << "Input Item : ";
		cin >> pnew -> data;
		pnew -> next = NULL;
		if(first != 0){
			temp -> next = pnew;
			temp = pnew;
		}
		else{
			first = temp = pnew;
		}
		//fflush(stdin);
		cout << "Do you want to continue ? ( 0 or 1 )\n";
		cin >> choice;
	}
	
	pnew = (NODE *)malloc(sizeof(NODE));
	cin >> pnew -> data;
	//first = insertF(first,pnew);
	first = insertB(first,pnew);
	
/*	temp -> next = 0;
	temp = first;*/
	
	cout << "\nstatus of the linked list is\n";
	/*while(temp!=0){
		cout << temp -> data << " ";
		count++;
		temp = temp -> next;
	}*/
	while(first != NULL){
		cout << first -> data;
		count++;
	}
	cout << "NULL\n";
	cout << "Number of node in list = " << count <<endl;
	
	return 0;
}
