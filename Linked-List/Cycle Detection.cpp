/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
      Node* first=head;
    Node* least=head;
    while(least !=NULL && least->next !=NULL)
    {
        first=first->next;
        least=least->next->next;
        if(least==first)
        {
            return true;
        }
    }
    return false;

}
