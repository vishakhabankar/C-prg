/* Generate Pattern for
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
	*                           */

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,k,sp=4;
	clrscr();
	printf("\n\n");
	for(r=1;r<=5;r++)
	{
	   for(k=sp;k>=1;k--)
	   {
	      printf("  ");
	   }
	   for(c=5;c>=r;c--)
	   {
	      printf("* ");
	   }
	   for(c=5;c>r;c--)
	   {
	      printf("* ");
	   }
	   printf("\n");
	   sp++;
	}
	getch();
}