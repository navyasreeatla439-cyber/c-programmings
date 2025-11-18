#include<stdio.h>
void mul(int,int);
int main()
{
	int x=2,y=3;
	mul(x,y);
	return 0;
}
void mul(int x,int y)
{
	int z;z=x*y;
	printf("mul=%d",z);
}
