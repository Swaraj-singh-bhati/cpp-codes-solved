class Solution {
public:
    
    int binarySearch1(vector<int>& nums, int start, int end, int target)
    {
        int ans = -1,mid;
        while(start<=end)
        {
            mid = start + (end - start) / 2;
            
            if(nums[mid] == target)
            {
                ans = mid;
                end = mid - 1;
            }
            
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
    
    int binarySearch2(vector<int>& nums, int start, int end, int target)
    {
        int ans = -1,mid;
        while(start<=end)
        {
            mid = start + (end - start) / 2;
            
            if(nums[mid] == target)
            {
                ans = mid;
                start = mid + 1;
            }
            
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int start = 0, end = nums.size()-1;
        int chota = binarySearch1(nums, start, end, target);
        int bada = binarySearch2(nums, start, end, target);

        return {chota, bada};
    }
};
