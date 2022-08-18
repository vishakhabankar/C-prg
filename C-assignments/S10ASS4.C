//read a number and radix of a no to find power
#include<stdio.h>
#include<conio.h>
#include<math.h>

void printinput();
void findpower();
int n,r;
void main()
{
	clrscr();
	printf("\n") ;
	//printline('*');
	printinput();
	//printline('*');
	getch();
}
void printinput()
{
	  printf("Enter a number:");
	  scanf("%d",&n);
	  printf("Enter radix of number:");
	  scanf("%d",&r);
	  findpower();
}
void findpower()
{
	//int n,r,p=0;
	//printline();
	//printf("Enter a number:");
	//scanf("%d",&n);
	//printf("Enter radix of a number:");
	//scanf("%d",&r);
	p=pow(n,r);
	printf("Power=%d\n",p);
}