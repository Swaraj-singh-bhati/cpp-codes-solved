#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	vector<int> sum; int add,carry=0,big = n-1;
    if(n-m > 0)
    {
        for(int i=0; i<n-m; i++)
            b.insert(b.begin(), 0);
        big = n-1;
    }
    if( m-n > 0)
    {
        for(int i=0; i<m-n; i++)
            a.insert(a.begin(), 0);
        big = m-1;
    }
    for(int i=big; i>=0; i--)
    {
        add = (a[i] + b [i] + carry) % 10;
        carry = (a[i] + b[i] + carry) / 10;
        sum.insert(sum.begin(),add);
    }
    if(a[0] + b[0] + carry >= 10)
        sum.insert(sum.begin(),carry);
    return sum;
}
