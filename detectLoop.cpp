#include <bits/stdc++.h> 
using namespace std;

Node *detectLoop(Node *head)
{
    Node* slow = head;
    Node* fast = head;
    Node* loop = NULL;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            loop = slow;
            break;
        }    

    }
    return loop;
}

Node *removeLoop(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    Node *loop = detectLoop(head);
    if(loop == NULL)
    {
        return head;
    }
    if(loop == head)
    {
        Node *temp = head;;
        while(temp->next !=head)
        {
            temp = temp -> next;            
        }
        temp -> next = NULL;
        return head; 
    }
    Node *slow = head;
    Node *prev = NULL;
    while(slow!=loop)
    {
        prev = loop;
        slow = slow -> next;
        loop = loop -> next;
    }
    prev -> next = NULL;
    return head;
}
