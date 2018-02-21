/*
 ============================================================================
 Name        : Linked.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct Node {
	int data;
	struct Node* next;
};

struct Node* front=NULL;
struct Node* rear=NULL;


void Enqueue(int x)
{
	struct Node*temp=(struct Node*)malloc (sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=temp;
		rear=temp;
		return;
	}
	rear->next=temp;
	rear=temp;

}

void Dequeue()
{
	struct Node* temp=front;
	if(front !=NULL)
	{

    front = temp->next;
	}
	else
	return;

}

void print()
{
 //rear=front;
	struct Node* temp=front;
 printf("Queue is           :");
	while (temp !=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}

	printf("\n");
}



int main(void) {
	Enqueue(2);  print();
	Enqueue(5);  print();
	Dequeue();   print();
	Enqueue(3);  print();
	Dequeue();   print();

	return EXIT_SUCCESS;
}
