#include<stdio.h>
void bubble(int *ar,int n)
{
	int p,i,temp,sc;
	for(p=0;p<n-1;p++)
	{
		sc=0;
		for(i=0;i<n-p;i++)
		{
			if(ar[i]>ar[i+1])
			{
				temp=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=temp;
				sc++;
			}
		}
		if(sc==0)
		{
			break;
		}
	}
	
}
int main()
{
	int n,ar[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	bubble(ar,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	
}
