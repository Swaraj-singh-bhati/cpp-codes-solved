#include <bits/stdc++.h> 
using namespace std;

long long int solution(long long int N,long long int s, long long int e, long long int mid, long long int ans )
{
    mid = s + (e-s)/2;
    if( s > e )
    return ans;
    if(mid==(N/mid))
    {
        return mid;
    }
    else if(mid<(N/mid))
    {
        ans = mid;
        s = mid + 1;
        return solution(N,s,e,mid,ans);
    }
    else
    {
        e = mid -1;
        return solution(N,s,e,mid,ans);
    }
    return ans;
}

int sqrtN(long long int N)
{
    if(N<2) return N;
    long long int s= 0;
    long long int e= N;
    long long int mid = s + (e-s)/2;
    long long int ans = 1;
    ans = solution(N,s,e,mid,ans);
    return ans;
}
