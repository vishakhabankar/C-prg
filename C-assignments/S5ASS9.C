//read a number and find its digital sum

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,dsum=0;
	clrscr();
	printf("\n\n");
	printf("Enter number : ");
	scanf("%d",&n);
	while(n>0)
	{
	  dsum=dsum+(n%10);
	  n=n/10;
	}
	printf("Digital sum:%d\n",dsum);
	getch();
}