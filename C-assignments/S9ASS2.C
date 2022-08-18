//Read a number and radix of a number to find power

#include<stdio.h>
#include<conio.h>
#include<math.h>

void findpower(void);

void main()
{
	clrscr();
	printf("\n\n");
	findpower();
	getch();
}
void findpower(void)
{
	int n,r,p=0;
	printf("Enter number:");
	scanf("%d",&n);
	printf("Enter radix of no.:");
	scanf("%d",&r);
	p=pow(n,r);
	printf("Power=%d\n",p);
}