// Read a number and find their digital sum

#include<stdio.h>
#include<conio.h>

int digitalsum(int);

void main()
{
	int n;
	clrscr();
	printf("\n\n");
	printf("Enter number : ");
	scanf("%d",&n);
	printf("Digital sum = %d",digitalsum(n));
	getch();
}
int digitalsum(int n)
{
	int dsum=0;
	while(n>0)
	{
	   dsum=dsum+(n%10);
	   n=n/10;
	}
	return dsum;
}