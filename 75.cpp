void display(int[]);
#include<stdio.h>
int main()
{
	int a[]={10,20,30,40};
	display(a);
	return 0;
}
void display(int a[])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf(" %d",a[i]);
	}
}
