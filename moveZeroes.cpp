class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0; j<nums.size(); j++)
        {
            if(nums[j]!=0)
            {
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};

//Another Approach

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int count = 0, size = nums.size(), zeroes;
        for(int i=0; i<size; i++)
        {
            if(nums[i]!= 0)
            {
                nums[count++] = nums[i];
            }
        }
        zeroes = size - count;
        for(int i=count; i<size; i++)
        {
            nums[i] = 0;
        }
    }
};
