//Check eligibility for interview

#include<stdio.h>
#include<conio.h>

void main()
{
	char nm;
	float per;
	clrscr();

	printf("\n\n");
	printf("Enter your name :");
	scanf("%s",&nm);
	printf("Enter your percentage :");
	scanf("%f",&per);
	printf("\n\n");f
	if(per>=65)
	{
		printf("You are eligible");
	}
	else
	{
		printf("Waiting");
	}

	getch();
}