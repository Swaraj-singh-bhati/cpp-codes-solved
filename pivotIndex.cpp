class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size,index,leftsum=0,rightsum=0;
        size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(i==0)
            {
                leftsum=0;
            }
            else
            {
            leftsum=leftsum+nums[i-1];
            rightsum=0;
            }
            for(int j=i+1;j<size;j++)
            {
                rightsum = rightsum + nums[j];
            }
            if(leftsum==rightsum)
            {
                return i;
            }
            
        }
        return -1;
    }
};
