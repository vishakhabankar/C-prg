/* Develop a function which will returns no. of occurances of character
  in a string.
  o/p:  character occurs 5 times in a string
  */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void getcharacter();

void main()
{
	clrscr();
	printf("\n\n");
	getcharacter();
	getch();
}
void getcharacter()
{
	char str[100],c;
	int i,count=0;
	printf("Enter any string : ");
	gets(str);
	printf("Enter character to be searched : ");
	c=getchar();
	for(i=0;str[i];i++)
	{
	   if(str[i]==c)
	      count++;
	}
	printf("\n Character '%c' occures %d times \n",c,count);
}