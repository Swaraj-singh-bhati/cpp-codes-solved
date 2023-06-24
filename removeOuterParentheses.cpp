class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        stack<char> stk;
        string ans = "";
        int count = 0;
        for(int i =0; i<s.length(); i++)
        {
            if(s[i] == '(' && count == 0)
            {
                count++;
            }
            else if(s[i] == '(' && count != 0)
            {
                stk.push('(');
                ans.push_back('(');
            }
            else if(s[i] == ')' && stk.empty())
            {
                count--;
            }

            else if(s[i] == ')' && (!stk.empty()))
            {
                stk.pop();
                ans.push_back(')');
            }
        }

        return ans;
    }
};
