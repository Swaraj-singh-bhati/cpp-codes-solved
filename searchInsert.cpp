class Solution {
public:
    
    int solve(vector<int>& nums, int target)
    {
        int start = 0, end = nums.size()-1, mid = start + (start - end) / 2;
        while(start <= end)
        {
            mid = start + (end - start) / 2;

            if(nums[mid] == target)
            { 
                return mid;
            }
            else if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else 
            {
                end = mid - 1;  
            }
        }
        return start;
    }
    
    int searchInsert(vector<int>& nums, int target) 
    {
        return solve(nums, target);    
    }
};
