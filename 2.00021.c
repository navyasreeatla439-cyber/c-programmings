#include<stdio.h>
int Queue[100],n,i,x,rear=-1,front=-1,ch;
void insert();
void delete();
void display();
void main()
{
	//clrscr();
	printf("Enter Queue size:");
	scanf("%d",&n);
	printf("Queue operation: 1.insert 2.delete 3.display 4.exist\n");
	while(1)
	{
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
		    case 2:delete();
		           break;
		    case 3:display();
		           break;
		    case 4:printf("Exit from Queue");
		           exit(0);
		    default:printf("Invalid choice");
		    
		}
	}
	return 0;
}
	void insert()
	{
		if(rear==n-1)
		{
			printf("Queue is full");
		}
		else
		{
			rear++;
			printf("enter Queue element");
			scanf("%d",&x);
			Queue[rear]=x;
			printf("Element Inserted");
		}
	}
	void delete()
	{
		if(front==rear)
		{
			printf("Queue is empty");
		}
		else
		{
			front++;
			printf("delete data element is=%d",Queue[front]);
		}
	}
	void display()
	{
		if(front==rear)
		{
			printf("Queue is empty");
		}
		else
		{
			printf("Queue element are:\n");
			for(i=0;i<=rear;i++)
			{
				printf("%d",Queue[i]);
			}
		}
	}
