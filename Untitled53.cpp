#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("enter string name");
	gets(s);
	strrev(s);
	printf("reverse string =%s",s);
	return 0;
}
