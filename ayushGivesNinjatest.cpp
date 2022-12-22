#include <bits/stdc++.h> 

bool isPossible( vector<int> time,int m, int n,long long int mid)
{
    long long int dayCount = 1, timeSum = 0;
    for(int i=0; i<m; i++)
    {
        if(timeSum + time[i] <= mid)
        {
            timeSum += time[i];
        }
        else
        {
            dayCount++;
            if(dayCount > n || time[i] > mid )
            {
                return false;
            }
            timeSum = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
    long long int s = 0,e,mid, sum = 0;
    for(int i=0; i<m; i++)
    {
        sum += time[i];
    }
    e = sum;
    mid = s + (e-s)/2;
    long long int ans = -1;
    
    while(s<=e)
    {
        if(isPossible(time,m,n,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
