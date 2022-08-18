//read a radius of a circle to find diameter,area,circumference

#include<stdio.h>
#include<conio.h>

void main()
{
	int r;
	float dm,a,cir;
	clrscr();

	printf("Enter radius of circle : ");
	scanf("%d",&r);
	printf("\n\n");

	dm=2*r;
	a=3.14*r*r;
	cir=2*3.14*r;

	printf("Diameter of circle : %d\n",dm);
	printf("Area of circle : %2f\n",a);
	printf("Circumference of circle : %2f\n",cir);
	getch();


}