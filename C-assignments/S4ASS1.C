//Check voting eligibility

#include<stdio.h>
#include<conio.h>

void main()
{
	char nm;
	int age;
	clrscr();

	printf("\n\n");
	printf("Enter your name:");
	scanf("%s",&nm);
	printf("Enter your age:");
	scanf("%d",&age);
	printf("\n\n");
	if(age>=18)
	{
		printf(" you are eligible for voting \n");
	}
	else
	{
		printf(" you are not eligible for voting \n");
	}
	getch();
}