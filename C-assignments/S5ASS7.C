//read a number to find 10 multiples of a number

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n\n");
	printf("Enter a number : ");
	scanf("%d",&n);

	for(i=1;i<=10;i++)
	   printf("%d \t %d=%d\n",n,i,(n*i));

	getch();
}