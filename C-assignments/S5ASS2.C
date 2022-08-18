// Read your name to print for 20 times on screen using counter
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	char nm[10];
	clrscr();
	printf("\n\n");
	printf("Enter your name :");
	scanf("%s",&nm);
	while(i<=20)
	{
	  printf("\n %s",nm);
	  i=i+1;
	}
	getch();

}