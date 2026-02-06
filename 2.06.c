#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	float per;
} s1={101,"navya",89.99},s2;
void display(struct student s);
int main(){
struct student s3={103,"meghana",79.00};
printf("enter student 2 values");
scanf("%d %s %f",&s2.rno,&s2.name,&s2.per);
display(s1);
display(s2);
display(s3);
return 0;
}
void display(struct student s)
{
	printf("\n %d %s %f",s.rno,s.name,s.per);
}
