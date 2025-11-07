#include<stdio.h>
int main()
{
	int a,b,c,d,avg;
	printf("enter a value::");
	scanf("%d",&a);
	printf("\n enter b value::");
	scanf("%d",&b);
	printf("\n enter c value::");
	scanf("%d",&c);
	d=a+b+c;
	avg=d/3;
	printf("average of three numbers=%d",avg);
	return 0;
}
