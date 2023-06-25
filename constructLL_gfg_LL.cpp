class Solution {
  public:
    Node* constructLL(vector<int>& arr) 
    {
        Node* root = new Node();
        Node* Root = root;
        
        for(auto i: arr)
        {
            Node* newNode=new Node(i);
            root->next=newNode;
            root=root->next;
        }
        return Root->next;
    }
};
