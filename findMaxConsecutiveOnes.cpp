class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int size = nums.size();
        int ans = 0;
        int max = 0;
        for(int i =0; i<size; i++)
        {
            if(nums[i] == 0)
            {
                if(ans>max)
                    max = ans;
                ans =0;
            }
            else
            {
                ans++;
            }
        }
        if(ans>max)
            max = ans;
        return max;
    }
};
