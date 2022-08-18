//Read a number to find their digital sum
#include<stdio.h>
#include<conio.h>
int digitalsum(int);
void printline(char);
void main()
{
	int n;
	clrscr();
	printf("\n\n");
	printline('#');
	printf("\nEnter a number:");
	scanf("%d",&n);
	printf("Digital sum=%d\n",digitalsum(n));
	printline('#');
	getch();

}
int digitalsum(int n)
{
	int dsum=0;
	while(n>0)
	{
	   dsum+=(n%10);
	   n/=10;
	}
	return dsum;
}
void printline(char x)
{
	int i;
	for(i=1;i<=50;i++)
	   printf("%c",x);
}