//Using Two Stacks even and odd

vector<int> findSpiral(Node *root)
{
    if(!root) 
        return {};
    
    vector<int> res;
    
    stack<Node*> odd;
    stack<Node*> even;
    
    even.push(root);
    
    while(!odd.empty() || !even.empty())
    {
        while(!odd.empty())
        {
            res.push_back(odd.top()->data);
            
            if(odd.top()->left) 
                even.push(odd.top()->left);
            if(odd.top()->right) 
                even.push(odd.top()->right);
            odd.pop();
        }
        
        while(!even.empty())
        {
            res.push_back(even.top()->data);
            
            if(even.top()->right) 
                odd.push(even.top()->right);
            if(even.top()->left) 
                odd.push(even.top()->left);
            even.pop();
        }
    }
    
    return res;
}


//using queue and flag
vector<int> findSpiral(Node *root)
{
    vector<int> ans;
    int flag=0;
    
    if(root==NULL)
    {
        return ans;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        int size=q.size(); 
        vector<int> temp;
        for(int i=0;i<size;i++)
        {
            Node* r=q.front();
            q.pop();
            temp.push_back(r->data);
            
            if(r->left)
            {
                q.push(r->left);
            }
            
            if(r->right)
            {
                q.push(r->right);
            }
        }
        
        if(flag%2==0)
        {
            reverse(temp.begin(),temp.end());
        }
        
        for(int i=0;i<temp.size();i++)
        {
            ans.push_back(temp[i]);
        }
        
        flag++;
    }
    
    return ans;
}
