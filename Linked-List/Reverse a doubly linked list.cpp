/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node* Reverse(Node* head)
{
  Node* temp=head;
  Node* temp2=NULL;

    while(head !=NULL)
    {
     temp=head->prev;
    head->prev=head->next;
    head->next=temp;
    temp2=head;
    head=head->prev;

    }
     return temp2;



}
