//Structure of node
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
	
};
typedef struct Node node ;            //Creation of alias name // Declaring the variables of node structure
node *n1,*n2,*n3; 
int main(){
	n1=(node *)malloc(sizeof(node));
	n2=(node *)malloc(sizeof(node));
	n3=(node *)malloc(sizeof(node));
	n1->data=10;
	n2->data=20;
	n3->data=30;
	n1->next=n2;
	n2->next=n3;
	n3->next=NULL;
	printf("%d %d %d\n",n1,n1->data,n1->next);
	printf("%d %d %d\n",n2,n2->data,n2->next);
	printf("%d %d %d\n",n3,n3->data,n3->next);
}
              
