//read age and display msg

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	clrscr();
	printf("\n\n");
	printf("Enter your age :");
	scanf("%d",&age);
	printf("\n");
	if(age<18)
	  printf("You are Jr.kid");
	else if(age>=18 && age<25)
	  printf("You are college going");
	else if(age>=25 && age<40)
	  printf("You are carrier oriented");
	else if(age>=40 && age<60)
	  printf("You are middle age");
	else if(age>=60)
	  printf("You are old");

	  getch();

}