#include<stdio.h>
#include<stdlib.h>
struct Nodell
{
	int data;
	struct Nodell *next;
	
};
typedef struct Nodell nodell;
nodell *head=NULL,*tail=NULL,*temp,*nnll;

struct NodeT
{
	struct NodeT *left;
	int data;
	struct NodeT *right;
};
typedef struct NodeT nodetree;
nodetree *root=NULL,*nnt,*queue[100];


nodell *newnodell(int val)
{
	nnll=(nodell *)malloc(sizeof(nodell));
	nnll->data=val;
	nnll->next=NULL;
	return nnll;
}
void createll(int val)
{
	nnll=newnodell(val);
	if(head==NULL)
	{
		head=nnll;
	}
	else
	{
		temp=head;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=nnll;
		
	}
	
}
void displayll()
{
	temp=head;
	while(temp)
	{
		printf("%d %d %d\n",temp,temp->data,temp->next);
		temp=temp->next;
	}
	
}
/*
f=0
r=0   l d r
que:   0      0      0    0     0      0
       10      20    30    40   50     60
*/
nodetree *newnodetree(int val)
{
	nnt=(nodetree *)malloc(sizeof(nodetree));
	nnt->data=val;
	nnt->left=NULL;
	nnt->right=NULL;
	return nnt;
	
}
nodetree *constructtree(nodell *head)
{
	int f=0,r=0;
	temp=head;
	nnt=newnodetree(temp->data);
	queue[r]=nnt;
	while(1)
	{
		if(temp->next)
		{
			nnt=newnodetree(temp->next->data);
			queue[++r]=nnt;
			queue[f]->left=nnt;
			temp=temp->next;
			
			    
		}
		else
		{
			return queue[0];
		}
		if(temp->next)
		{
				nnt=newnodetree(temp->next->data);
				queue[++r]=nnt;
				queue[f]->right=nnt;
				temp=temp->next;
				
		}
		else
		{
			return queue[0];
		}
		f++;
	}
}
void inorder(nodetree * root)
{
	if(!root)
	{
		return;
	}
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
	
}

int main()
{
	int val,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&val);
		createll(val);
	}
	// displayll();
	root=constructtree(head);
	inorder(root);	
	
}

