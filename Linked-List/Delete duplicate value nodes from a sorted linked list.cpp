
Node* RemoveDuplicates(Node *head)
{
 Node* temp=head;

    while(temp !=NULL)
    {
        Node* prev=temp;
        Node* tail=prev->next;

    while(tail !=NULL)
    {
         if(temp->data==tail->data)
           {
            tail=tail->next;
            prev->next=tail;
            }
        else
        {
            tail=tail->next;
            prev=prev->next;
        }
    }

      temp=temp->next;
    }
      return head;
}
