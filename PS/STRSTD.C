#include<stdio.h>
#include<conio.h>
struct student
{
	int id[5];
	char name[5][10];
}s;
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\nEnter id of student : ");
		flushall();
		scanf("%d",&s.id[i]);
		printf("\nEnter name of student : ");
		flushall();
		gets(s.name[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Id : %d",s.id[i]);
		printf("\n Name : %s",s.name[i]);
	}
	getch();
}
