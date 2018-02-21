


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
 *
 **********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void insert_elements(int element);

//**********************************************************************************
//structure
struct Node
{
	int data;
	struct Node* next; //pointer to Node to store the address of the structure
};
struct Node* head; /*global variable store the address of the first Node*/

//************************************************************************************
int main(void)
{
	int num,element;
	head=NULL; //empty list
	printf("How many numbers?\n");
	fflush(stdout);
	scanf("%d",&num);
	int i;
	for(i=0;i<num;i++)
	{
		printf("Enter the number\n");
		fflush(stdout);
		scanf("%d",&element);

		insert_elements(element); // call insert_elements() function


	}

    return 0;
}

//***************************************************************************

void insert_elements(int element)
{
	/* to creat a Node by using malloc function that return void pointer
	 * temp store the address of the Node */
  struct Node* temp =(struct Node*)malloc(sizeof(struct Node));
  temp ->data=element; /*temp is pointer variable to modify the value
  at the particular node*/
  temp ->next=head;
  head=temp; /*head pointer to the Node*/

  printf("List is:");
  while(temp !=NULL)
  {
	printf("%d\t",temp->data);
	temp=temp->next;
  }
  printf("\n");

}


