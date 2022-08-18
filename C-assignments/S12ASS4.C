//String pattern
/*
A
AX
AXI
AXIO
AXIOM
----------          */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,j;
	clrscr();
	printf("\n\n");
	printf("Enter a string : ");
	scanf("%s",&str);
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<=i;j++)
		{
		printf("%c",str[j]);
		}
		printf("\n");
	}
	getch();
}