//Develop a function to convert case of a given string

#include<stdio.h>
#include<conio.h>
#include<string.h>

void changecase();

void main()
{
	clrscr();
	printf("\n\n");
	changecase();
	getch();
}
void changecase()
{
	int i;
	char str[100];
	printf("Enter a string in any case : ");
	gets(str);
	//scanf("%s",&str);
	for(i=0;str[i];i++)
	{
	   if(str[i]>=65 && str[i]<91)
	     str[i]+=32;
	   else if(str[i]>=97 && str[i]<123)
	     str[i]-=32;
	}
	printf("\n Change case string : %s \n",str);
}