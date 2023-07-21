#include<stdio.h>
#include<stdlib.h>
struct Nodell
{
	int data;
	struct Nodell *next;
	
}
typedef struct Nodell nodell;
nodell *head=NULL,*tail=NULL,*temp,*nnll;
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
void display()
{
	temp=head;
	while(temp)
	{
		printf("%d %d %d",temp,temp->data,temp->next);
		temp=temp->next;
	}
	
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
	displayll();
	
	
}

