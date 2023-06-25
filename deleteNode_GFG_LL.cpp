Node* deleteNode(Node *head,int x)
{
    if(x == 1)
        return head ->next;
        
    Node* newNode = head;
    
    for(int i=1; i<x-1; i++)
    {
        newNode = newNode->next; 
    }
    
    newNode ->  next = newNode->next->next;
    
    return head;
}
