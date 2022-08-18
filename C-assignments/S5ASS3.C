//read a no till their summation remains <=100 & count total nos entered

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,cnt=0;
	clrscr();
	printf("\n\n");
	do
	{
	   printf("Enter a number :");
	   scanf("%d",&n);
	   sum=sum+n;
	   cnt++;
	}while(sum<=100);
	printf("Total numbers entered:%d\n",cnt);
	printf("Summation = %d\n",sum);
	getch();

}