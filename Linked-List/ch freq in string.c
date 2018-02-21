
/*
 * enter your sring
 * nada
 * freq of all ch in the string
 * a=2
 * d=1
 * n=1
 *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>


//**************************************************************************
int main(void)
{
char str[1000];
int i,freq[255],ascii;
printf("enter your string");
fflush(stdout);
gets(str);

for(i=0;i<255;i++)
{
	freq[i]=0;
}
printf("freq of all ch in the string\n");


fflush(stdout);
i=0;
while(str[i] !='\0')
{
	ascii=(int)str[i];
	freq[ascii]+=1;

	i++;
}

for(i=0;i<255;i++)
{ if(freq[i] !=0)
  {
	printf("%c=%d",i,freq[i]);
	printf("\n");
  }
}


    return 0;
}

