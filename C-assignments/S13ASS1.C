/* Construct a dim array of integers to find
  * list of all elements with subscript and memory
  * sum
  * Avearage
  * Max
  * Min
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int A[5];
	int i,n,sum=0,avg=0,max,min;
	clrscr();
	printf("\n");
	n=sizeof(A)/2;
	printf("Enter elements in array :");
	for(i=0;i<n;i++)
	   scanf("%d",&A[i]);

	printf("\nArray subscript \t Element \t Memory Address \n");
	max=min=A[0];
	for(i=0;i<n;i++)
	{
	  printf("A[%d] \t\t\t %d \t\t %u\n",i,A[i],&A[i]);
	  sum+=A[i];
	  avg=sum/n;
	  if(max<A[i])
	     max=A[i];
	  if(min>A[i])
	     min=A[i];
	}

	printf("\nSum of array = %d",sum);
	printf("\nAverage of array = %d",avg);
	printf("\nMax of array = %d",max);
	printf("\nMin of array = %d",min);
	getch();
}