class Solution {
public:
    string reverseWords(string s) 
    {
        string ans="";
        string t="";
        for(int i=s.size()-1;i>=0;i--)
        {
            if (s[i]==' '&&t.size()>0)
            {
                reverse(t.begin(),t.end());
                if(ans.size()>0)
                {
                    ans+=' ';
                }
                ans+=t;
                t=""; 
            }
            else if(s[i]!=' ')
            {
                t+=s[i];
            }
        }
    if(t.size()>0)
    {
        if(ans.size()>0)
        ans+=' ';
        
        reverse(t.begin(),t.end());
        ans=ans+t;
    }
        return ans;
    }
};
