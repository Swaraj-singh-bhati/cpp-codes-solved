#include <bits/stdc++.h> 
using namespace std;
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node *findMiddle(Node *head) 
{
    int count = 0;
    if(head==NULL || head->next == NULL)
    {
        return head;
    }
    Node *current = head;
    Node *middle = head;

    while(current != NULL)
    {
        count++;
        if(count%2==0)
        {
            middle = middle->next;
        }
        current = current->next;
    }
    return middle;    
}
