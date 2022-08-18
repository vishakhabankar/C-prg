/* Construct a single dim array of string to find
* List all elements with subscript
* Find all strings starts with vowels
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char A[100];
	char temp[300];
	int i,j,k,c=1,len;
	//clrscr();
	printf("\n\nEnter a string : ");
	gets(A);
	temp[0]=' ';
	for(c=0;c<strlen(A);c++)
	{
	   temp[c+1]=A[c];
	}
	len=strlen(temp);
	for(c=0;c<len;i++)
	{
	   if(temp[i]==' ')
	   {
	      i++;
	      if(temp[i]=='a' || temp[i]=='A' || temp[i]=='e' || temp[i]=='E' || temp[i]=='i' || temp[i]=='I' || temp[i]=='o' || temp[i]=='O' || temp[i]=='u' || temp[i]=='U')
	      {
		for(j=i;j<len;j++)
		{
		  if(temp[j]!=' ')
		  {
		    printf("%c",temp[j]);
		    //break;
		  }
		  else
		  {
		    i=j-1;
		    break;
		  }
		}
	      }
	   }
	  printf(" ");
	}
//	getch();
return 0;
}