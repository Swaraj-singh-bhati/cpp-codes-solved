#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> ans;
    int a=0,b=-1;
    for(int i =0; i<n; i++)
    {
        if(arr[i]==k)
        {
            a++; 
        }
        if(arr[i]>k)
        {
            b = i-1;
            break;
        }
    }
    if(a==0)
    {
        ans = make_pair(-1,-1);
        return ans;
    }
    if(b==-1)
    {
        b=n-1;
    }
    ans = make_pair(b-a+1,b);
    return ans;
}
