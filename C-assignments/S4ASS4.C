//calculate Netprice by offering 20% discount

#include<stdio.h>
#include<conio.h>

void main()
{
	char bnm,anm;
	int qty;
	float pr,npr,dis,tp;
	clrscr();
	printf("\n\n");

	printf("Enter Book name :");
	scanf("%s",&bnm);
	printf("Enter Auther name :");
	scanf("%s",&anm);
	printf("Enter unit price :");
	scanf("%f",&pr);
	printf("Enter Quantity :");
	scanf("%d",&qty);

	tp=pr*qty;
	dis=tp*0.2;
	npr=tp-dis;

	printf("\n\n");
	printf("Total Price = %f\n",tp);
	printf("Net price of books = %f",npr);
	getch();


}