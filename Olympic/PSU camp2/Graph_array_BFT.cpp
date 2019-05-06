#include <iostream>
#include <cstdlib>
using namespace std;

struct node{
	int data;
	struct node* next;
};

struct node* head = NULL;

int array[500] = {0};
int front = -1;
int rare = -1;

void enqueue(int fill){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = fill;
	
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
	int matrix[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			matrix[i][j] = 0;
		}
	}
	int edge1,edge2,E,node;
	int flag[100];
	int i,j,k=1;
	int x,y,count=0,v,mark[100];
	flag[0] = -1;
	cout << "Enter Vertex : ";
	cin >> node;
	cout << "Enter Edge : ";
	cin >> E;
	
	for(i=1;i<=E;i++){
		cin >> edge1 >> edge2;
		matrix[edge1][edge2] = 1;
		matrix[edge2][edge1] = 1;
		count++;
		if(flag[0]==-1){
			flag[0] = edge1;
		}
	}
	
	enqueue(flag[0]);

	while(head != NULL){
		v = dequeue();
		mark[v] = 1;
		cout << v << " ";
		for(i=1;i<100;i++){
			if(matrix[v][i] == 1 && mark[i] != 1){
				enqueue(i);
				mark[i] = 1;
			}
		}
	}

	return 0;
}	
