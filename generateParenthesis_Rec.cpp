class Solution 
{
public:
    vector<string> generateParenthesis(int n) 
    {
        int open = n;
        int close = n;
        vector<string> ans;
        string str = "";
        solve(str, open, close, ans);
        return ans;
    }

    void solve(string str, int open, int close, vector<string> &ans)
    {
        if(open == 0 && close == 0)
        {
            ans.push_back(str);
            return;
        }
        //when count of open and close brackets are same then 
        //we have only one choice to put open bracket 
        if(open == close)
        {
            string op1 = str;
            op1.push_back('(');
            solve(op1, open-1, close, ans);
        }
        else if(open == 0)
        {
            //only choice is to put close brackets 
            string op1 = str;
            op1.push_back(')');
            solve(op1, open, close-1, ans);
        }
        else
        {
            string op1 = str;
            string op2 = str;
            op1.push_back('(');
            op2.push_back(')');
            solve(op1, open-1, close, ans);
            solve(op2, open, close-1, ans);
        }
    }
};
