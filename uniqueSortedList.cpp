#include<bits/stdc++.h>
using namespace std;

Node * uniqueSortedList(Node * head) 
{
    if(head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while(temp -> next!= NULL)
    {
        if(temp -> data == temp->next -> data)
        {
            temp->next = temp->next->next;
        }
        else
        temp = temp -> next;
    }
    return head;
}
