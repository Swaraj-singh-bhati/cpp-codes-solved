void solve(Node* root, vector<int> &temp, vector<vector<int>> &ans)
{
    if(!root)
        return;
    
    temp.push_back(root->data);
    
    
    if(root->left == NULL && root->right == NULL)
    {
        ans.push_back(temp);
        temp.pop_back();
        return;
    }
    
    solve(root->left, temp, ans);
    
    solve(root->right, temp, ans);
    
    temp.pop_back();
}


vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(root, temp , ans);
    return ans;
}
