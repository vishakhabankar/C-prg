//selection criteria

#include<stdio.h>
#include<conio.h>

void main()
{
	char nm[10];
	int age;
	float ht;
	clrscr();

	printf("Enter your name :");
	scanf("%s",&nm);
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your height :");
	scanf("%f",&ht);
	printf("\n\n");
	if(age>18 && age<25 && ht>=5.4)
	{
		//if(ht>=5.4)
		   printf("%s you are selected \n ",nm);
		//else
		  // printf("%s you are rejected\n",nm);
	}
	else
	{
		//if(ht<5.4)
		  // printf("%s you are rejected due to both height & age issue\n",nm);
	       //	else
		   printf("%s you are rejected \n",nm);
	}
	getch();


}