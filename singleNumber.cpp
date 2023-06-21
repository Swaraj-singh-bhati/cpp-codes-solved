class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int size = nums.size();
        int xor1 = 0;
        for(int i= 0; i<size; i++)
        {
            xor1 = xor1 ^ nums[i];
        }
        return xor1;
    }
};
