//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) 
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

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends
