#include <bits/stdc++.h> 

bool isCircular(Node* head)
{
    if(head==NULL){

        return 1;

    }

    Node* slow=head;

    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){

        slow=slow->next;

        fast=fast->next->next;

        if(slow==fast){

            if(slow==head){

                return 1;

            }

            else{

                return 0;

            }

        }

    }

    return 0;
}
