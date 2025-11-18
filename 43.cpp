#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],k[10][10],r,c,i,j;
	printf("enter matrix rows & columns size");
	scanf("%d%d",&r,&c);
	printf("enter A matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter B matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	{
		scanf("%d",&b[i][j]);
	}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			k[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("result matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d",k[i][j]);
		}
		printf("\n");
	}
	return 0;
}
