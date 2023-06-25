class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char, int> mpp1, mpp2;

        if(s.size() != t.size())
            return false;

        for(int i =0; i<s.length(); i++)
        {
            mpp1[s[i]] = mpp1[s[i]] + i; 
            mpp2[t[i]] = mpp2[t[i]] + i; 
        }

        for(int i=0; i<s.length(); i++)
        {
            if(mpp1[s[i]]!=mpp2[t[i]])
            {
                return false;
            }    
        }
        return true;
    }
};
