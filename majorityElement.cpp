//better solution 
//TC -> O(N log N)
//SC -> O(N)
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
       int n = nums.size();
        
        unordered_map<int, int> ans;
        
        for(int i=0; i<n; i++)
        {
            ans[nums[i]]++;
        }
        for(auto it: ans)
        {
            if(it.second > (n/2))
                return it.first;
        }
        return -1;
    }
};

//Optimal solution 
//Moore's Voting Algorithm
//TC->O(N)
//SC ->O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
       int count = 0;
       int element = INT_MIN;

       for(int i=0;i<nums.size();i++)
       {
           if(count==0)
           {
               count = 1;
               element = nums[i];
           }
           else if(nums[i] == element) 
               count++;
           else count--;
       }
        
       return element;
    }
};
