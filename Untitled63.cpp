#include<stdio.h>
void fact(long int);
int main()
{
	long int n;
	printf("enter any number");
	scanf("%ld",&n);
	fact(n);
	return 0;
}
void fact(long int n)
{
	long int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial is =%d",f);
}
