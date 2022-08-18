//Develop a function which will read a string and returns no of words in it
#include<stdio.h>
#include<conio.h>
#include<string.h>

void wordcount();

void main()
{
	int n;
	clrscr();
	printf("\n\n");
	wordcount();
	getch();
}
void wordcount()
{
	char str[100];
	int i,word=0;
	printf("Enter a string : ");
	gets(str);
	//scanf("%s",&str);
	for(i=0;str[i];i++)
	{
	   if(str[i]==32)
	      word++;
	}
	if(i>0)
	   word++;
	printf("Number of words in string = %d\n",word);
}