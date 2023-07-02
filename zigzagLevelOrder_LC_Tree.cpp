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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        vector<int> temp;
        queue<TreeNode*> q;
        if(root == NULL)
        {
            return ans;
        }
        bool flag = true;
        q.push(root);

        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* top=q.front();
                q.pop();
                temp.push_back(top->val);
                if(top->left!=NULL)
                    q.push(top->left);
                if(top->right!=NULL)
                    q.push(top->right);
            }
            if(flag == true)
                ans.push_back(temp);
            else
            {
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
            }

            temp.clear();
            flag = !flag;    
        }

        return ans;
    }
};
