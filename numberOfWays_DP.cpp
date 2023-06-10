#include <bits/stdc++.h> 
#define MOD 1000000007

int add(int a, int b)
{
    return (a%MOD + b%MOD)%MOD;
}

int mul(int a, int b)
{
    return ((a%MOD)* 1LL * (b%MOD))%MOD;
}

int solve(int n, int k)
{
    int prv2 = k;
    int prv1 = add(k, mul(k, k-1));

    for(int i=3; i<=n; i++)
    {
        int ans = add(mul(prv1, k-1), mul(prv2, k-1));
        prv2 = prv1;
        prv1 = ans;
    }
    return prv1;
}

int numberOfWays(int n, int k) 
{
    return solve(n,k);
}
