class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        int idx=0;
        return construct(idx,INT_MAX,preorder);
    }
    TreeNode* construct(int &idx, int bound, vector<int> &preorder)
    {
        if(idx==preorder.size()||preorder[idx]>bound) 
            return NULL;
        
        TreeNode* root=new TreeNode(preorder[idx]);
        idx++;
        root->left=construct(idx,root->val,preorder);
        root->right=construct(idx,bound,preorder);
        return root;
    }    
};
