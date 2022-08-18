//Compute Price of oranges

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	float p,qty,tp,rp;
	clrscr();

	printf("Enter price for dozen of oranges : ");
	scanf("%f",&p);
	printf("Enter quantity of oranges in dozen : ");
	scanf("%f",&qty);

	tp=p*qty;
	rp=ceil(tp);
	printf("\n");
	printf("Total price of oranges : %f\n",tp);
	printf("Round up price of : %f\n",rp);

	//return 0;
	getch();
}