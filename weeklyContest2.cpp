#include <bits/stdc++.h> 
int classTest(int n, vector<int> &a, int k) 
{
    sort(a.begin(),a.end());
    int marks = a[n-k];
    return marks;
}


#include <bits/stdc++.h> 
string binaryShopping(string S, int P)
{
    int n= S.length(),limit = 2;char value;
    for(int i=n-1; i>=0; i-- )
    {
        if(S[i]=='1' && limit > 0)
        {
            S[i] = '0';
            limit--;
        }
        if(i==0 && limit == 1)
        {
            S[i] = '1';
        }
    }
    return S;
}



#include <bits/stdc++.h> 
vector<int> bitwiseAnd(int n, int q, vector<int> arr, vector<int> queries)
{
    int max,bit=1; vector <int> ans;
    for(int i=1; i<n; i++)
    {
        arr[i] = arr[i] & arr[i-1];
    }
    for(int j=0; j<q; j++)
    {
        max = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>=queries[j])
                max++;
            else 
                break;
        }
        ans.push_back(max);
    }
    return ans;
}
