#include<stdio.h>
int main()
{
	int bs,da,hra,gs,DA,HRA;
	printf("enter bs value");
	scanf("%d",&bs);
	da=(bs*15)/100;
	hra=(bs*15)/100;
	DA=(bs*15)/100;
	HRA=(bs*20)/100;
	if(bs>=10000)
	printf("da=%d,hra=%d",da,hra);
	else
	printf("da=%d,hra=%d",DA,HRA);
	gs=bs+da+hra;
	printf("gross salary =%d",gs);
	return 0;
}
