// make an insert at linked list
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void insert_elements(int num,int loc);

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
	int loc,num,i;
	head=NULL; //empty list
	 i=0;
 for(i=0;i<3;i++)
   {
	printf("\nEnter your number?\n");
	fflush(stdout);
	scanf("%d",&num);

	printf("the number location 1 or 2?\n");
	fflush(stdout);
	scanf("%d",&loc);

	insert_elements(num,loc);
	}




    return 0;
}

//***************************************************************************

void insert_elements(int num,int loc)
{
	int i;
	/* to creat a Node by using malloc function that return void pointer
	 * temp store the address of the Node */
  struct Node* temp1 =(struct Node*)malloc(sizeof(struct Node));

  temp1 ->data=num; /*temp is pointer variable to modify the value
  at the particular node*/
  temp1 ->next=NULL;

 printf("list is:\n");
 fflush(stdout);
if (loc==1)
{
	  temp1 ->next=head;
	  head=temp1;
	  while(temp1 !=NULL)
	  {
	  printf("%d",temp1->data);
	  temp1=temp1->next;
	  }
	  return;
}
struct Node* temp2 =head;
for(i=0;i<loc-2;i++)
{
temp2=temp2->next;
}
temp1->next=temp2->next;
temp2->next=temp1;
while(temp2 !=NULL)
{
printf("%d",temp2->data);
temp2=temp2->next;
}

}


