/* Generate Pattern for
	*
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *       */

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,k,sp=4;
	clrscr();
	printf("\n\n");
	for(r=1;r<=5;r++)
	{
	   for(k=1;k<=sp;k++)
	   {
	      printf("  ");
	   }
	   for(c=1;c<=r;c++)
	   {
	      printf("* ");
	   }
	   for(c=1;c<r;c++)
	   {
	      printf("* ");
	   }
	   printf("\n");
	   sp--;
	}
	getch();
}