#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int l,j,i,flag;
	printf("enter string name");
	gets(s);
	l=string(s);
	for(i=0;j=l-1;i<j;i++;j--)
	{
		if(s[i]!=s[j])
	{
	flag=1
	break;
}
}
if(flag==0)
printf("both string is equal");
else
printf("both string are not equal");
return 0;
}
