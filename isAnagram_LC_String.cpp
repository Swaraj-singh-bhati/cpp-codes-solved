class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        vector<int> count1(26, 0);
        vector<int> count2(26, 0);

        if(s.length() != t.length())
            return false;

        for(int i=0; i<s.length(); i++)
        {
            count1[s[i] - 'a']++;
            count2[t[i] - 'a']++;
        }

        for(int i=0; i<26; i++)
        {
            if(count1[i] != count2[i])
                return false;
        }

        return true;    
    }
};
