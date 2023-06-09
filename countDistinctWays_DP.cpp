#include <bits/stdc++.h>
int countDistinctWays(int nStairs) 
{
    int mod = 1000000007;
    if(nStairs == 0)
        return 1;
    int prv1 = 1;
    int prv2 = 0;
    int curr;
    for(int i=1; i<=nStairs; i++)
    {
        curr = (prv1 + prv2) % mod;
        prv2 = prv1;
        prv1 = curr;
    }
    return curr;
}
