//Calculate total time and fuel

#include<stdio.h>
#include<conio.h>

void main()
{
	int d;
	float t,f=45,sp=65,tf;
	clrscr();

	printf("Enter total distance : ");
	scanf("%d",&d);

	t=d/sp;
	tf=d/f;

	printf("\n\n");
	printf("Total distance(km) : %d\n",d);
	printf("Maximum speed(km/hr) : 65 \n");
	printf("Avg fuel consumption(km/lt) : 45\n\n");
	printf("Total time taken(hr) : %2f\n",t);
	printf("Required fuel(litre) : %2f\n",tf);
	getch();


}