#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	int i=0;
	fp=fopen("untitled1.cpp","w");
	while(i<20)
	{
		ch=getchar();
		fputc(ch,fp);
		i++;
	}
	fclose(fp);
	return 0;
}
