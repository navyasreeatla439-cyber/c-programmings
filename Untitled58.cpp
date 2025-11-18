#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i;
	printf("enter string 1 name");
	gets(s1);
	printf("enter string 2 name");
	gets(s2);
	i=strcmp(s1,s2);
	if(i==0)
	printf("both strings are equal");
	else
	printf("both strings are not equal");
	return 0;
}
