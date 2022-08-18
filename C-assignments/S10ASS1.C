//functions to print 10 multiples of a given number
#include<stdio.h>
#include<conio.h>

void multi(int);
void printline(char);
void main()
{
	int n;
	clrscr();
	printf("\n\n");
	printline('*');
	printf("\nEnter a number:");
	scanf("%d",&n);
	multi(n);
	getch();
}
void multi(int n)
{
	int i=1;
	for(i=1;i<=10;i++)
	{
	   printf("%4dx%4d=%4d\n",n,i,(n*i));
	}
	printline('*');
}
void printline(char x)
{
	int i;
	for(i=1;i<=50;i++)
	   printf("%c",x);
}