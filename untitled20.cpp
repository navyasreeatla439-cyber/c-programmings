#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("enter p r t values");
	scanf("%f%f%f",&p,&r,&t);
	si=p*r*t/100;
	printf("simple interest=%f",si);
	return 0;
}
