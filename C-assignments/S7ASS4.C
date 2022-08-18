/* Generate Pattern
A B C D E
A B C D
A B C
A B
A          */

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	clrscr();
	printf("\n\n");
	for(r='E';r>='A';r--)
	{
	   for(c='A';c<=r;c++)
	   {
	      printf("%c ",c);
	   }
	   printf("\n");
	}
	getch();

}