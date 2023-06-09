//top down approach using recursion and memoization
// TC-> O(N) SC->O(N)

#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
        if(n <= 1)
        return n;

        if(dp[n] != -1)
        return dp[n];

        dp[n] = fib(n-1, dp) + fib(n-2, dp);
        return dp[n];
        
}
int main()
{
        int n;
        cin >> n;

        vector<int> dp(n+1, -1);

        cout << fib(n, dp);
}

//Tabulation || Bottom up approach

#include<bits/stdc++.h>
using namespace std;
int fib(int n, vector<int> &dp)
{        
        dp[1] = 1;
        dp[2] = 1;

        for(int i=3; i<=n; i++)
        {
                dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];    
}
int main()
{
        int n;
        cin >> n;

        vector<int> dp(n, -1);

        cout << fib(n, dp);

}

//Space Optimised Approach

#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;

        int prv1 = 1;
        int prv2 = 1;

        for(int i=3; i<=n; i++)
        {
                int curr = prv1 + prv2;

                prv2 = prv1;
                prv1 = curr;
        }

        cout << prv1 << endl;
}
