/*
 ============================================================================
 Name        : Binary.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
struct BST
{
	int data;
	struct BST* left;
	struct BST* right;

};

struct BST* root=NULL;
void print (struct BST* root)
{

	 if(root != NULL)
	    {
		 printf("%d",root->data);
	        if(root->left) print(root->left);
	        if(root->right) print(root->right);
	    }
	    else return;
	}


void insert (int x)
{
	struct BST*temp=(struct BST*)malloc (sizeof(struct BST));

	    struct BST* parent;
	    temp->data = x;
	    temp->left = NULL;
	    temp->right = NULL;
	    parent = NULL;

	    // is this a new tree?
	    if(root==NULL)
	    	root = temp;
	    else
	    {
	        //Note: ALL insertions are as leaf nodes
	    	struct BST*  curr;
	        curr = root;
	        // Find the Node's parent
	        while(curr)
	        {
	            parent = curr;
	            if(temp->data > curr->data)
	            {
	            	curr = curr->right;
	            }
	            else
	            {
	            	curr = curr->left;
	            }
	        }

	        if(temp->data < parent->data)
	           parent->left = temp;
	        else
	           parent->right = temp;
	    }


}





int main(void) {

	insert(15); print(root);
	insert(10); print(root);
	insert(90); print(root);

	return 0;
}



