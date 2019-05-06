#include <iostream>
#include <cstdlib>
using namespace std;

struct node{
	struct node* left;
	int data;
	struct node* right;
};

struct node* insert_BST(struct node* root,int info){
	if(root == NULL){
		root = (struct node*)malloc(sizeof(struct node));
		root -> data = info;
		root -> left = NULL;
		root -> right = NULL;
		return root;
	}
	else{
		if(info < root -> data)		return insert_BST(root -> left,info);
		else{
			return insert_BST(root -> right,info);
		}
	}
}

void insertBST2()

struct node* preorder(struct node* temp){
	if(temp != NULL){
		cout << temp -> data  << " " ;
			preorder(temp -> left);
			preorder(temp -> right); 
	}
}

int main(){
	struct node* head = NULL;
	int n,i,info;
	cout << "Enter number of data : ";
	cin >> n;
	cout << "Data : " << endl;
	for(i=0;i<n;i++){
		cin >> info;
		head = insert_BST(head,info);
	}
	preorder(head);
	
	return 0;
}
