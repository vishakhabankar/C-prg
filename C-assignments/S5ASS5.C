// Read a number to check it is Prime number or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("\n\n");
	printf("Enter nmuber : ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
	  if(n%i==0)
	  {
	    printf("\n This number is not Prime");
	    break;
	  }
	  else
	  {
	    printf("\n This number is Prime");
	    break;
	  }
	}
	getch();

}