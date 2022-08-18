//Print price and their discout

#include<stdio.h>
#include<conio.h>

void main()
{
	float pr,dis;
	clrscr();
	printf("\n\n");
	printf("Enter Price : ");
	scanf("%f",&pr);
	printf("\n\n";
	if(pr<1500)
	   printf("You are not having any discout");
	else if(pr>=1500 && pr<4500)
	   printf("You are having 2 percent discount");
	else if(pr>=4500 && pr<6000)
	   printf("You are having 4 percent discount");
	else if(pr>=6000)
	   printf("You are having 8 percent discount");

	getch();

}