//Electricity board consumer bill

#include<stdio.h>
#include<conio.h>

void main()
{
	char nm[10];
	int mn,in,fn,tu;
	float bill;
	clrscr();

	printf("Enter consumer name : ");
	scanf("%s",&nm);
	printf("Enter meter number :");
	scanf("%d",&mn);
	printf("Enter initial reading :");
	scanf("%d",&in);
	printf("Enter final reading :");
	scanf("%d",&fn);

	tu=fn-in;
	bill=tu*3.50;

	printf("\n\n");
	printf("\t\t\t\t Electricity Bill \n");
	printf("Consumer name : %s\n",nm);
	printf("Meter number : %d\n",mn);
	printf("Initial reading : %d\n",in);
	printf("Final reading : %d\n",fn);
	printf("Total unit consumed : %d\n",tu);
	printf("\n");
	printf("Total amount = Rs %2f\n",bill);
	getch();
}