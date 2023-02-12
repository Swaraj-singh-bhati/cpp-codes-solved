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

Node *removeDuplicates(Node *head)
{
    if(head == NULL)
    {
        return NULL;
    }
    map<int,bool> visited;
    Node *temp = head;
    while(temp->next!=NULL)
    {
        visited[temp->data]=true;
        if(visited[temp->next->data] == true)
        {
            temp->next = temp ->next ->next; 
        }
        else
        temp = temp->next;
    }
    return head;    
}
