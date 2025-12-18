#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("untitled1.cpp","r");
	if(fs=NULL)
	{
		printf("file does not exist");
		exit(0);
	}
	ft=fopen("untitled0.cpp","w");
	if(ft==NULL)
	{
		printf("unable to open a file");
		exit(0);
	}
	ch=fgetc(fs);
	while(ch!=EOF)
	{
		fputc(ch,ft);
		ch=fgetc(fs);
	}
	fclose(fs);
	fclose(ft);
	printf("file copies successfully");
	return 0;
}
