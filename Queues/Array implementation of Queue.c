/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/* output
 * Q:       2
 * Q:       2 5
 * Q:       2 5 3
 */


#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false -1
#define size 3

void Equeues(int x);
void  Dqueues();
int IsEmpty();
void print();

int front , rear;
int arr[size];


int main(void) {


	front=-1;
	rear=-1;
	Equeues(2); print();
	Equeues(5); print();
	Equeues(3); print();
	Dqueues();  print();
	Equeues(9); print();

	return EXIT_SUCCESS;
}


void Equeues(int x)
{
	if ((rear+1)%size == front) //IS the queue full
		{
		printf("error :Queue is full");
			return;
		}
	else if(IsEmpty()==1)
		{
		front = rear= 0;

		}

	else
	{
		rear=(rear+1)%size;  //next rear
	}
	arr[rear]=x;
}


void  Dqueues()
{
	if(IsEmpty()==1)
	{
		return;
	}
	else if (front==rear)
	{
	front =-1;	//empty queue
	rear=-1;
	}
	else
	{
		front=(front+1)%size;
	}


}


int IsEmpty()
{
	if (front==-1 && rear==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void print()
{

	int count = (rear+size-front)%size + 1;
			printf("Q:       ");
			for(int i = 0; i <count; i++)
			{
				int index = (front+i) % size; // Index of element while travesing circularly from front
				printf("%d",arr[index]);
				printf(" ");
			}
			printf("\n");
		}




