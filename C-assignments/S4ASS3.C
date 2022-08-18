//Find sum, average,eldest,youngest among them

#include<stdio.h>
#include<conio.h>

void main()
{
	char nm1,nm2,nm3;
	int age1,age2,age3;
	int sum;
	float avg;
	clrscr();
	printf("\n\n");

	printf("Enter 3 persons name :");
	scanf("%s%s%s",&nm1,&nm2,&nm3);
	printf("Enter 3 persons age :");
	scanf("%d%d%d",&age1,&age2,&age3);

	printf("\n\n");
	sum=age1+age2+age3;
	avg=sum/3.0;
	printf("Sum = %d\n",sum);
	printf("Average = %f\n\n",avg);

	if(age1>age2)
	{
		if(age1>age3)
		{
		   printf("%d is Eldest \n",age1);
		}
		else
		{
		   printf("%d is Eldest \n",age3);
		}
	}
	else
	{
		if(age2>age3)
		{
		   printf("%d is Eldest \n",age2);
		}
		else
		{
		   printf("%d is Eldest \n",age3);
		}
	}
	if(age1<age2)
	{
		if(age1<age3)
		{
		   printf("%d is Youngest \n",age1);
		}
		else
		{
		   printf("%d is Youngest \n",age3);
		}
	}
	else
	{
		if(age2<age3)
		{
		   printf("%d is Youngest \n",age2);
		}
		else
		{
		   printf("%d is Youngest \n",age3);
		}
	}
	getch();


}