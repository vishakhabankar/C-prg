//Print all even numbers in the range 0-100 and print their summation

#include<stdio.h>
#include<conio.h>

void checkeven(void);

void main()
{

	clrscr();
	printf("\n\n");
	checkeven();
	getch();
}
void checkeven(void)
{
	int i,sum=0;
	for(i=0;i<=100;i++)
	{
	   if(i%2==0)
	   {
	     printf("%d\n",i);
	     sum=sum+i;
	   }
	}
	printf("Summation = %d",sum);
}