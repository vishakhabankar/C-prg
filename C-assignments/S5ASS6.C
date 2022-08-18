//Read a number to check it is armsrong or not

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,temp;
	clrscr();
	printf("\n\n");
	printf("Enter number : ");
	scanf("%d",&n);
	temp=n;

	while(n!=0)
	{
	   r=n%10;
	   sum=sum+(r*r*r);
	   n=n/10;
	}
	if(sum==temp)
	   printf("This number is Armstrong");
	else
	   printf("This number is not Armstrong");

	   getch();
}