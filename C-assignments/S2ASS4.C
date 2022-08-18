//Convert Temperature from centigrade to farhenite

#include<stdio.h>
#include<conio.h>

void main()
{
	float f,c;
	clrscr();

	printf("Enter the Temperature in centigrade : ");
	scanf("%f",&c);

	f=(c*1.8)+32;
	printf("\n\n");

	printf("Temperature in centigrade : %f\n",c);
	printf("Temperature in farhenite : %f\n",f);
	getch();

}