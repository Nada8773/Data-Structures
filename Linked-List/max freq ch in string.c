/*
 * enter your string
 * nada
 * the highest freq a is 2
 *
 *
 ***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>


//************************************************************
int main(void)
{
char str[1000];
int freq[255];
int max;
int ascii;
int i;

printf("enter your string");
fflush(stdout);
gets(str);



for(i=0;i<255;i++) // max ch in the string is 255
{
	freq[i]=0;
/* Initializes frequency array of all characters
 to 0 */

}


i=0;
while(str[i] != '\0')
{
	 ascii=(int)str[i]; //casting to convert for example A to 65
	freq[ascii]=freq[ascii]+1;
	i++;
}

max=0;
for(i=0;i<255;i++)
{
	if (freq[i]>freq[max])
	{
		max=i;
	}
}
printf("the highest freq %c is %d",max,freq[max]);
return 0;
}

