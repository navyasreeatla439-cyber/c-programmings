#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int l;
	printf("enter string name");
	gets(s);
	l=strlen(s);
	printf("length of the string =%d",l);
	return 0;
}
