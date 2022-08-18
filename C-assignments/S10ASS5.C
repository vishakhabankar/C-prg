// print all even numbers in the range 0-100 and print summation

#include<stdio.h>
#include<conio.h>

void printeven();
void printsum();
void main()
{
	clrscr();
	printf("\n");
	printeven();
	getch();
}
void printeven()
{
	int i;
	for(i=0;i<=100;i++)
	{
	   if(i%2==0)
	      printf("%d\n",i);
	}
	printsum();
}
void printsum()
{
	int j,sum=0;
	for(j=0;j<=100;j++)
	{
	   if(j%2==0)
	      sum+=j;
	}
	printf("Summation=%d",sum);
}
