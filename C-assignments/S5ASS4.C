//Read a number to find a factorial

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,f=1;
	clrscr();
	printf("\n\n");
	printf("Enter a number :");
	scanf("%d",&n);
	while(n>0)
	{
	   f*=n;
	   n--;
	}
	printf("Factorial of a number :%d\n",f);
	getch();
}