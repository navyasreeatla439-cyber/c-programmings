void display(int marks[]);
#include<stdio.h>
int main()
{
	int marks[5],i;
	printf("enter array values");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	display(marks);
	return 0;
}
void display(int marks[5])
{
	int i;
	printf("display array values \n");
	for(i=0;i<5;i++)
	{
		printf("%d",marks[i]);
	}
}
