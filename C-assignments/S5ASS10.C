// Read a number to check Palindrom
#include<stdio.h>
#include<conio.h>
void main()
{	int n,r,sum=0,temp;
	clrscr();
	printf("\n\n");
	printf("Enter number : ");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	  r=n%10;
	  sum=sum*10+r;
	  n=n/10;
	}
	if(sum==temp)
	  printf("\n This number is Palindrom");
	else
	  printf("\n This number is not Palindrom");
	  getch();
}