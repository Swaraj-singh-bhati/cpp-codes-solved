#include<bits/stdc++.h>
using namespace std;
Node* sortList(Node *head)
{
    Node *temp = head;
    Node *zero = new Node(-1);
    Node *one = new Node(-1);
    Node *two = new Node(-1);
    Node *zeroHead = zero;
    Node *oneHead = one;
    Node *twoHead = two;
    while(temp!=NULL)
    {
        if(temp->data == 0)
        {
            {

                zero->next = temp;
                zero = zero->next;
            }

        }
        
        else if(temp->data == 1)
        {
            {
                one->next = temp;
                one = one->next;
            }

        }
        
        else if(temp->data == 2)
        {
            {
                two->next = temp;
                two = two->next;
            }

        }
        temp = temp->next;
    }
    two->next = NULL;    
    zero->next = oneHead->next;
    one->next = twoHead->next;
    head = zeroHead->next;
    return head;
}
