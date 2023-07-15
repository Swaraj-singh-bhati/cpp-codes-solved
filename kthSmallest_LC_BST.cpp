//Solution 1
class Solution 
{
public:

    void inorder(TreeNode* root, vector<int> &ans)
    {
        if(root == NULL)
            return;
        
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int> ans;
        inorder(root, ans);
        return ans[k-1];    
    }
};


//Solution 2
class Solution 
{
public:

    int ans;
    
    int kthSmallest(TreeNode* root, int k) 
    {
        inorder(root, k);
        return ans;
    }
    
    void inorder(TreeNode* root, int& k) 
    {
        if (!root) 
            return;
        
        inorder(root->left, k);
        
        if (--k == 0)
        {
            ans = root->val;
            return;
        } 
        
        inorder(root->right, k);
    }  
};
