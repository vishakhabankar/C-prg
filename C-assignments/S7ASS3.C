/* Generate Pattern
A
B B
C C C
D D D D
E E E E E     */

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
	      printf("%c ",r);
	   }
	   printf("\n");
	}
	getch();
}