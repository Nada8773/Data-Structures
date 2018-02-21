
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define num_of_element 5

//Functions Prototype
void search_elements(int arr[],int num);
void print(int flag,int counter);
void sort_elements(int arr[]);


//**********************************************************************************
int main(void)
{
	int arr[num_of_element],i,num;
	printf("Enter your 5 numbers:\n");
	fflush(stdout);
	for(i=0;i<num_of_element;i++) // fill the 5 array elements
		{
		scanf("%d",&arr[i]);
		}
	printf("Enter the number to be searched:\n");
	fflush(stdout);
	scanf("%d",&num);

	search_elements(arr,num);
	sort_elements(arr);



    return 0;
}

//***************************************************************************

/* function search for an element in the array  */

void search_elements(int arr[],int num)
{
	int i=0,flag=0,counter;
	for(i=0;i<num_of_element;i++)
			{
	 if(arr[i]==num)
	 {
		 counter=i;
		flag=1; //element found
		print(flag,counter);

	 }
	        }
	if (flag==0) //element not found
		printf("the Number Not found\n ");
}

//****************************************************************************************

void print(int flag,int counter)
{
	   if(flag==1) //element  found
			{
				printf("the Number found at location %d\n",counter+1);
			}
		else //element not found
			{
				printf("the Number Not found ");
			}

}


/*******************************************************************************************/

// this function sort the element in the array from the upper to lower

void sort_elements(int arr[])
{
	int i,j,temp,sum=0;
	for ( i = 1; i < num_of_element; i++)

			{
		for ( j = 0; j < num_of_element-i; j++)
				{

				if (arr[j]<arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}

				}
			}
		printf("\n");

			printf("your element after the sort\n");
			for ( i = 0; i < num_of_element; i++)
			{
				printf("%d\n",arr[i]);
				sum+=arr[i];

			}
			printf("the average number of the element is :%d",sum/2);
			printf("\n");
			printf("the upper number of the element is :%d",arr[0]);

}















