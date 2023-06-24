//My Approach

class Solution {
public:
    string largestOddNumber(string num) 
    {
        string ans = "";
        int length = num.length(), i =0, j = length-1, k, l;
        while(i<=j)
        {
            k  = int(num[i]);
            l  = int(num[j]);
            if(i == 0  && l % 2 == 1)
            {
                while(i<=j)
                {
                    ans.push_back(num[i]);
                    i++;
                }                
            }
            if(k % 2 == 1 && l % 2 == 1)
            {
                while(i<=j)
                {
                    ans.push_back(num[i]);
                    i++;
                }
            }
            else if(k % 2 == 1 && l % 2 ==0)
            {
                j--;
            }
            else if(k % 2 ==0 && l % 2 == 1)
            {
                i++;
            }
            else if(k % 2 == 0 && l % 2 == 0)
            {
                j--;
            }
        }
        return ans;
    }
};

//optimal approach

class Solution {
public:
    string largestOddNumber(string num) 
    {
        int n = num.size();
        for(int i=n-1; i>=0; i--)
        {
            if((num[i]-'0')%2 !=0) 
                return num.substr(0, i+1);
        }
        return "";
    }
};
