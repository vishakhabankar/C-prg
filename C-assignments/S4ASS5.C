//Print remarks on age

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	clrscr();
	printf("\n\n");
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("\n\n");
	if(age<18)
		printf("Jr Kid");
	else if(age>=18 && age<25)
		printf("Young one");
	else if(age>=25 && age<40)
		printf("Career age");
	else if(age>=40 && age<60)
		printf("Mid age");
	else if(age>60)
		printf("Old");

	getch();
}