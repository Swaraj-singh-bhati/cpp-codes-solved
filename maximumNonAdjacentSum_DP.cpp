#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums)
{
    int n = nums.size();
    int prv2 = 0;
    int prv1 = nums[0];
    for(int i=1; i<n; i++)
    {
        int incl = prv2 + nums[i];
        int excl = prv1;

        int ans = max(incl,excl);

        prv2 = prv1;
        prv1 = ans;
    }
    return prv1;
}
