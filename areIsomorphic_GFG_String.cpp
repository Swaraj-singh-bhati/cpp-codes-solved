//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        unordered_map<char, int> mpp1, mpp2;

        if(str1.size() != str2.size())
            return false;

        for(int i =0; i<str1.length(); i++)
        {
            mpp1[str1[i]] = mpp1[str1[i]] + i; 
            mpp2[str2[i]] = mpp2[str2[i]] + i; 
        }

        for(int i=0; i<str1.length(); i++)
        {
            if(mpp1[str1[i]]!=mpp2[str2[i]])
            {
                return false;
            }    
        }
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
