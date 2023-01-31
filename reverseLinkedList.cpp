#include <bits/stdc++.h> 
using namespace std;


// void reverse(LinkedListNode<int>* &head,LinkedListNode<int>* &current,LinkedListNode<int>* &prev)
// {
//     if(current == NULL)
//     {
//         head = prev;
//         return;
//     }
//     LinkedListNode<int>* forward = current->next;
//     reverse(head,forward,prev);
//     current->next = prev;
// }

// LinkedListNode<int> *reverse1(LinkedListNode<int> *head)
// {
//     if( head == NULL|| head->next == NULL)
//     {
//         return head;
//     }
//     LinkedListNode<int> *chhotaHead = reverse1(head->next);
    
//     head->next->next = head;
//     head->next = NULL;
//     return chhotaHead;
// }

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if( head == NULL|| head->next == NULL)
    {
        return head;
    }
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* forward = NULL;
    LinkedListNode<int>* current = head;

    while(current!= NULL)
    {
        forward = current-> next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    return prev;

    // //Reccursive Solution
    // LinkedListNode<int>* prev = NULL;
    // LinkedListNode<int>* current = head;
    // reverse(head,current,prev);
    // return head;

    // //Another Solution
    // return reverse1(head);
}


