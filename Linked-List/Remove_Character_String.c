/*
 *Enter the string : nada

*Enter character which you want to delete : a

 *corrected string is : nd

 **************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

void del(char str[], char ch);

//******************************************************************************
int main(void) {
	 char ch,str[1000];

	   printf("\nEnter the string : ");
	   fflush(stdout);
	   gets(str); //use it instead of scanf when i don't know how large the input in the buffer

	   printf("\nEnter character which you want to delete : ");
	   fflush(stdout);
       scanf("%s", &ch);
del(str, ch); // that function delete the charecter

	return 0;
	}

//**************************************************************************************

void del(char str[], char ch) {
   int i, j = 0;
   int size;
   char ch1;
   char str1[1000]; //another array

   size = strlen(str); //this function calculate the length of string

   for (i = 0; i < size; i++) {
      if (str[i] != ch) { //if character is other than given character then store it into another array.
         ch1 = str[i];
         str1[j] = ch1;
         j++;
      }
   }
   str1[j] = '\0';

   printf("\n corrected string is : %s", str1);
}

