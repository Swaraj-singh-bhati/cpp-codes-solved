class Solution 
{
public:
    
    bool inorder(TreeNode* root, long long int &ans)
    {
        if(root == NULL)
            return true;

        bool left = inorder(root->left, ans);

        if(root->val <= ans)
            return false;
        else
            ans = root->val;
        
        bool right = inorder(root->right, ans);

        return left && right;
    }

    bool isValidBST(TreeNode* root) 
    {
       long long int ans = LLONG_MIN;
       return inorder(root, ans);
    }
};
