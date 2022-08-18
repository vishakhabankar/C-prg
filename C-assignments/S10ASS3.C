//print your name for 20 times on the screen
#include<stdio.h>
#include<conio.h>
void printline(char);
void printname(char[]);
void main()
{
	char nm[10];
	clrscr();
	printf("\n");
	printline('$');
	printf("\nEnter your name:");
	scanf("%s",&nm);
	printname(nm);
	getch();
}
void printname(char x[])
{
	int i;
	for(i=1;i<=20;i++)
	  printf("%d\t%s\n",i,x);
	printline('$');
}
void printline(char x)
{
	int i;
	for(i=1;i<=50;i++)
	  printf("%c",x);
}