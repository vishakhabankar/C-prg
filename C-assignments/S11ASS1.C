// Generate a fibbo series for n terms by writing a recursive function
#include<stdio.h>
#include<conio.h>

int fibbo(int);
void main()
{
	int n,i;
	clrscr();
	printf("\n\n");
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("\nFibonacci series is : \n");
	for(i=0;i<n;i++)
	 printf("%d ",fibbo(i));
	getch();
}
int fibbo(int i)
{
	if(i==0)
	   return 0;
	else if(i==1)
	   return 1;
	else
	   return (fibbo(i-1)+fibbo(i-2));
}