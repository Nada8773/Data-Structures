/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    int flag=0;

     while(headA !=NULL && headB !=NULL)
          {
  if(headA->data==headB->data)
      {
          flag=1;
          headA=headA->next;
          headB=headB->next;
      }

  else
      {
     flag=0;
     break;
      }

         }
  if  ((headA ==NULL && headB !=NULL)||(headA !=NULL && headB ==NULL))
  {
      flag=0;
  }





 return flag;
}
