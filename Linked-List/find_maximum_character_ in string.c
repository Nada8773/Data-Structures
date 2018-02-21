
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

void freq(char str[]);

int main(void) {
	   char str[1000];

	   printf("Enter any sting:\n");
	   fflush(stdout);
	   gets(str);

freq(str);

return 0;
	}



void freq(char str[])
{
	 char size;
		   int count=0,i,j;
		   size=strlen(str);
		   for (i=0;i<size;i++)
		   {
			   for (j=i+1;j<size;j++)
			   		   {
				   if(str[i]==str[j])
				   {
					   count++;
				   }
			   		   }
		   }
}
