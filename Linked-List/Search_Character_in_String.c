/*
 *enter your string
 * nada
*Enter the character to be searched
* n
*1
 **********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>


//****************************************************************
int main(void) {
	char ch,str[100];
	int count;
	int i;
	int size;
	printf("enter your string");
	fflush(stdout);
	gets(str);
	printf("Enter the character to be searched");
	fflush(stdout);
	scanf("%s",&ch);

	size=strlen(str);

	count=0;
		for(i=0;i<size;i++)
		{
			if(str[i] ==ch)
				count++;
		}
		      printf("%d", count);


return 0;
	}




