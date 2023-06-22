//Brute force
//O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int size = nums.size();
        vector<int> ans;
        for(int i=0; i<size-1; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

//slightly better optimization
//use hashmap to store the element and index and find the remaining sum in the hashmap 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> track;
        
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            int num = nums[i];
            int moreNeeded = target - nums[i];
            if(track.find(moreNeeded) != track.end())
            {
                return {track[moreNeeded], i};
            }
            track[num] = i;
        }
        return {-1,-1};
    }
};

