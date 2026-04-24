#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front=-1,rear=-1;
int isfull()
{
	return(rear + 1)%MAX_SIZE==front;
}
int isEmpty()
{
	return front==-1;
}
void enqueue()
{
	int data;
	printf("\nenter element");
	scanf("%d",&data);
	if(isfull)
	{
		printf("Queue overflow \n");
		return;
	} 
	if(front==-1)
	{
		front=0;
	}
	rear=(rear+1)%MAX_SIZE;
	queue[rear]=data;
	printf("Element %d inserted \n",data);
}
void dequeue()
{
	if(isEmpty)
	{
		printf("Queue underflow\n");
		return;
	}
	int data=queue[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%MAX_SIZE;
	}
	printf("\ndeleted element %d",data);
}
void display()
{
	if(isEmpty())
	{
		printf("Queue is Empty\n");
		return;
	}
	printf("Queue elements:");
	int i=front;
	while(i!=rear)
	{
		printf("%d",queue[i]);
		i=(i+1)%MAX_SIZE;
	}
	printf("%d\n",queue[rear]);
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n\t\t\t OUEUE OPERATIONS ARE");
		printf("\n\t\t\t 1.Insert");
		printf("\n\t\t\t 2.Delete");
		printf("\n\t\t\t 3.Disp");
		printf("\n\t\t\t 4.Exit");
		printf("\n\t\t Enter your choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				   enqueue();
				   break;
			case 2:
				   dequeue();
				   break;
			case 3:
				   display();
				   break;
			case 4:
				   exit(0);
				   break;
		    default:printf("\nINVALID CHOICE,try again:");
		}
	}
}
