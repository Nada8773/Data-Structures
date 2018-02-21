


/* make an insert at linked list
 *
 * How many numbers?
 * 2
 * Enter the number:
 * 8
 * list is:
 * 8
 * Enter the number:
 * 5
 * list is:
 * 58
 * Enter the location to delete the element
 * 1
 * list is
 * 8
 *
 **********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void insert_elements(int element);
void Reverse(int num);
void print();

//**********************************************************************************
int main(void)
{
	int arr[100],i,temp;
	printf("Enter your numbers:\n");
	gets(arr);

	i=0;
	while(arr[i]!='\0')
	{
		if(arr[i]<arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		i++;
	}
	for(i=0;i<100;i++)
	{
	printf("%d",arr[i]);
	}


    return 0;
}

//***************************************************************************

void insert_elements(int element)
{



}


//****************************************************************************************




//********************************************************************************



















