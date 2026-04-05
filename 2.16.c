#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*llink,*rlink;
};
struct node*start=NULL,*temp=NULL,*last=NULL,*t1=NULL,*t2=NULL;
void firstinsert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\tEnter an element to store in NODE");
	scanf("%d",&e);
	temp->data=e;
	temp->llink=NULL;
	temp->rlink=NULL;
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->rlink=start;
	}
}
void lastinsert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\t Enter an element to store in NODE");
	scanf("%d",&e);
	temp->data=e;
	temp->rlink=NULL;
	temp->llink=NULL;
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		last->rlink=temp;
		temp->llink=last;
		last=temp;
	}
}
void middleinsert()
{
	int e,pos,i=1;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\t Enter an element to store in NODE");
	scanf("%d",&e);
	temp->data=e;
	temp->rlink=NULL;
	temp->llink=NULL;
	printf("\n Enter the position to insert");
	scanf("%d",&pos);
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		printf("\n Inside of middle insert fun");
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->rlink;
			i++;
		}
		temp->rlink=t1;
		t1->llink=temp;
		t2->rlink=temp;
		temp->llink=t2;
	}
}
void firstdelete()
{
	if(start==NULL)
	{
		printf("\n\t linked list is empty,No Nodes to perform Delete operation");
	}
	else
	{
		t1=last->llink;
		t1->rlink=NULL;
		last=t1;
	}
}
void middledelete()
{
	int pos,i=1;
	printf("\n Enter the position to delete the Node");
	scanf("%d",&pos);
	if(start==NULL)
	printf("\n\t No Element to Delete,Linked List is EMPTY");
	else
	{
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->rlink;
			i++;
		}
		t2->rlink=t1->rlink;
		t1->rlink->llink=t2;
	}
}
void dis()
{
	if(start==NULL)
	{
		printf("\n NO element in linked list......");
	}
	else
	{
		printf("\n\t\t double linked list elements START to last NODE are....\n\t");
		t1=start;
		while(t1!=NULL)
		{
			printf("%d",t1->data);
			t1=t1->rlink;
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n\t\t\t....doubly linked list operation");
		printf("\n\n\t\t1.first Insert");
		printf("\n\n\t\t2.last Insert");
		printf("\n\t\t\t3.middle Insert");
		printf("\n\t\t\t4.first delete");
		printf("\n\t\t\t5.last delete");
		printf("\n\t\t\t6.middle delete");
		printf("\n\t\t\t7.display");
		printf("\n\n\t\t9.exist");
		printf("\n\n\t Enter your choice...");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: firstinsert();
			        break;
		    case 2: lastinsert();
		            break;
		    case 3: middleinsert();
		            break;
		    case 4: firstdelete();
		            break;
		    case 5: lastdelete();
		            break;
		    case 6: middledelete();
		            break;
		    case 7: dis();
		            break;
		    case 9: exit(0);
		}
	}
	return 0;
}
