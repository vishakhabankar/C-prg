//Read a no and print reverse

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n\n");
	printf("Enter a number :");
	scanf("%d",&n);
	printf("\n");
	printf("Reverse number is :");
	while(n>0)
	{
		printf("%d",n%10);
		n/=10;
	}
	getch();
}