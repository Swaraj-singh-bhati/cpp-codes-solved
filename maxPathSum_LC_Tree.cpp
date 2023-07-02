/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{
public:
    int solve(TreeNode* root,int &ans)
    {
        // Base Case 
        if(root==NULL) 
            return NULL;
        int ls = solve(root->left,ans);
        int rs = solve(root->right,ans);
        int temp = max(max(ls,rs)+root->val,root->val);
        int res = max(temp,ls+rs+root->val);
        ans = max(ans,res);
        return temp;
    }
    int maxPathSum(TreeNode* root) 
    {
        int ans = INT_MIN;
        solve(root,ans);
        return ans;
    }
};
