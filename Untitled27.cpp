#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a b values");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d b=%d",a,b);
	a=a*b;
	a=a/b;
	a=a/b;
	printf("after swap a=%d b=%d",a,b);
	return 0;
}
