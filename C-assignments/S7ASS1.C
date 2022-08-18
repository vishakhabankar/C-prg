/* Generate Pattern
A
A B
A B C
A B C D
A B C D E      */

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	clrscr();
	printf("\n\n");
	for(r='A';r<='E';r++)
	{
	   for(c='A';c<=r;c++)
	   {
	      printf("%c ",c);
	   }
	   printf("\n");
	}

	getch();
}