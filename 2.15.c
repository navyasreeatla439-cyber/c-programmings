#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*link;
};
struct node*start=NULL,*temp,*last,*t1,*t2;
void firstinsert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n\f Enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		temp->link=start;
		start=temp;
	}
}
void lastinsert()
{
	int e;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n \t Enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
		last=temp;
	}
	else
	{
		last->link=temp;
		last=temp;
	}
}
void middleinsert()
{
	int e,pos,i=1;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n \t Enter an element to store in node");
	scanf("%d",&e);
	temp->data=e;
	temp->link=NULL;
	printf("\n Enter the position to insert");
	scanf("%d",&pos);
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		printf("\n Inside of middle insert fun");
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		temp->link=t2->link;
		t2->link=temp;
	}
}
void firstdelete()
{
	if(start==NULL)
	{
		printf("\n\t Linked list is Empty,No Nodes to perform Delete operation");
	}
	else
	{
		start=start->link;
		printf("\n\t first Node is Deleted successfully");
	}
}
void lastdelete()
{
	if(start==NULL)
	printf("\n\t first Nodes in linked list to delete");
	else
	{
		t1=start;
		while(t1->link!=NULL)
		{
			t2=t1;
			t1=t1->link;
		}
		t2->link=NULL;
		last=t2;
	}
}
void middledelete()
{
	int pos,i=1;
	printf("\n Enter the position to delete the Node");
	scanf("%d",&pos);
	if(start==NULL)
	printf("\n\t Element to delete,linked list is EMPTY");
	else
	{
		t1=start;
		while(i<pos)
		{
			t2=t1;
			t1=t1->link;
			i++;
		}
		t2->link=t1->link;
	}
}
void disp()
{
	if(start==NULL)
	{
		printf("\n No element in linked list.........");
	}
	else
	{
		printf("\n\t\t linked list elements are..........");
		temp=start;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->link;
		}
	}
}
int main()
{
	int ch,k;
	while(1)
	{
		//system("cls");
		printf("\n\t\t\t.....linked list operations.....");
		printf("\n\n\t\t1.First Insert");
		printf("\n\n\t\t2.Last Insert");
		printf("\n\n\t\t3.Middle Insert");
		printf("\n\n\t\t4.First Delete");
		printf("\n\n\t\t5.Last Delete");
		printf("\n\n\t\t6.Middle Delete");
		printf("\n\n\t\t7.display");
		printf("\n\n\n\n\t8.Exit");
		printf("\n\n\t Enter your choice...");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:firstinsert();   break;
			case 2:lastinsert();    break;
			case 3:middleinsert();  break;
			case 4:firstdelete();   break;
			case 5:lastdelete();    break;
			case 6:middledelete();  break;
			case 7:disp();          break;
			case 8:exit(0);
		}/*switch closed*/
	}/*while closed*/
	return 0;
}/*main closed*/

