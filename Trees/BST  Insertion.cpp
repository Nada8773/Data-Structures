/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{

    if(root==NULL)
    {
        node* temp=new node;
        temp->data=value;
        temp->left=NULL;
        temp->right=NULL;
        root=temp;
    }
    else if(root!=NULL && value<=root->data)
    {
        root->left=insert(root->left,value);
    }
     else if(root!=NULL && value>=root->data)
    {
        root->right=insert(root->right,value);
    }





   return root;
}
