class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int n = nums.size();
        int ones = 0, twoes = 0, zeroes = 0;
        for(int i =0; i<n; i++)
        {
            if(nums[i] == 0)
            {
                zeroes++;
            }
            
            if(nums[i] == 1)
            {
                ones++;
            }
            
            if(nums[i] == 2)
            {
                twoes++;
            }
        }
        
        for(int i =0; i<n; i++)
        {
            if(zeroes >0)
            {
                nums[i] = 0;
                zeroes--;
            }
            
            else if(ones >0)
            {
                nums[i] = 1;
                ones--;
            }
            
            else if(twoes >0)
            {
                nums[i] = 2;
                twoes--;
            }
        }
    }
};

//optimal solution 

//Dutch National Flag Algorithm

class Solution 
{
public:
    void sortColors(vector<int>& nums) 
    {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
                
            else if(nums[mid] == 1)
            {
                mid++;
            }
            
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
