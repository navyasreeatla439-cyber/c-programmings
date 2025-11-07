#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter a b c values");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c)?a:c:(b>c)?b:c;
	printf("maximum of three numbers is=%d",max);
	return 0;
	
}
