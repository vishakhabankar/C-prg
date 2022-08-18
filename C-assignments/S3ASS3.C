//Even or odd

#include<stdio.h>
#include<conio.h>

void main()
{
	int n,a;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&n);
	printf("\n\n");

	//a=n%2;

	if(n%2==0)
		printf("%d is even number \n",n);
	else
		printf("%d is odd number \n",n);

	getch();



}