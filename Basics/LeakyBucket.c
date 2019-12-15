#include<stdio.h>
#define MAX 1000
#define LIMIT 10
struct Queue
{
	int front=-1,rear=-1;
	int MyQ[10];
	int num;
}q;
	int IsEmpty()
	{
		if(q.front=q.rear=-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	int IsFull()
	{
		if(q.front==q.rear)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	int push()
	{
		if(IsFull())
		{
			printf("\nSorry,queue is full");
		}
		else
		{
			
			printf("\nEnter the element to insert in the queue :");
			scanf("%d",&num);
			for(i=0;i<LIMIT;i++)
			{
				q.MyQ[i]=num;	
			}
		}	
	}
	
	
	
	int pop()
	{
		if(IsEmpty())
		{
			printf("\nSorry,queue is full");
		}
		else
		{
			
			printf("\nEnter the element to insert in the queue :");
			scanf("%d",&num);
			for(i=0;i<LIMIT;i++)
			{
				q.MyQ[i]=num;	
			}
		}	
	}
	
	
	
	}

int main()
{
}
