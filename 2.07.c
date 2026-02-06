#include<stdio.h>
#include<string.h>
union student
{
	int rno;
	char name[10];
	float per;
};
int main()
{
	union student s={101,"aditya",99.99};
	printf("%d %s %f",s.rno,s.name,s.per);
	return 0;
}
