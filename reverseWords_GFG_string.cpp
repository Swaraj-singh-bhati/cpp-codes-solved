//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
    string reverseWords(string S) 
    { 
        stack<string>s;
        int n = S.length();
        string str = "", ans = "";
        
        for (int i = 0; i<n; i++)
        {
            if (S[i] == '.')
            {
                s.push(str);
                s.push(".");
                str = "";
            }
            else
                str += S[i];
        }
        // for last word
        s.push(str);
        
        while(!s.empty())
        {
            ans += s.top();
            s.pop();
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
