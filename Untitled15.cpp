#include<stdio.h>
int main()
{
	int d,m,y,sum,lucky;
	printf("enter d m y values");
	scanf("%d%d%d",&d,&m,&y);
	sum=d+m+y;
	lucky=sum%d;
	printf("your lucky number=%d",lucky);
	return 0;
}
