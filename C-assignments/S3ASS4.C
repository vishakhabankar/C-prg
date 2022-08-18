//Temperature

#include<stdio.h>
#include<conio.h>

void main()
{
	int c;
	clrscr();
	printf("\n\n");
	printf("Enter temperature in centigrade:");
	scanf("%d",&c);
	printf("\n\n");
	if(c>30 && c<40)
		printf("Its hot");
	else if(c>40)
		printf("Its more hot");
	else
		printf("Its Normal");

	getch();
}
