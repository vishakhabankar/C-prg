/* Generate Pattern
A A A A A
B B B B
C C C
D D
E              */

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	clrscr();
	printf("\n\n");
	for(r='A';r<='E';r++)
	{
	   for(c='E';c>=r;c--)
	   {
	      printf("%c ",r);
	   }
	   printf("\n");
	}
	getch();


}