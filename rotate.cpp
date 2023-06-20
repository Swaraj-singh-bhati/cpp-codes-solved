class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      
    // just to practice the modulus approach
      int n = nums.size();
      vector<int> temp(n);
      
      
      for(int i =0;i<n;i++) {
        
        temp[(i+k)%n] = nums[i];
        
      }
      
      
      for(int i=0;i<nums.size();i++) 
      {
        nums[i] = temp[i];
      }
      
    }
};

//Another Way

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        k %= nums.size();//if k is greater than nums then we take this
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
