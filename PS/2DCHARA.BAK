/* Write a program to enter five string and print it.
	Date :- 21-2-22
	Author:- Tanmay S. Chaudhari
	*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10];
	//name contain 5 string and each string has 9 charactar.
	int i;
	clrscr();
	//Logic to input 5 string.
	for(i=0;i<5;i++)
	{
		printf("\n Enter a name %d : ",i+1);
		flushall();
		gets(name[i]);
	}
	//Logic to print 5 string.
	for(i=0;i<5;i++)
		printf("\n\tname %d : %s",i+1,name[i]);

	//Logic to print a single charactar of each string.
	for(i=0;i<5;i++)
		printf("\n\tfirst charactar of name %d : %c",i+1,name[i][0]);
	getch();
}