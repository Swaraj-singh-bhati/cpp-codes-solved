long long appleAndCoupon(int n, int m, vector<int> arr){
    long long int price=0;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++)
    {
        if(i==n-m)
            continue;
        price = price + arr[i];
    }
    return price;
}


#include <bits/stdc++.h> 
long long threeWaySplit(int n, vector<int> arr)
{
    long long int frontSum = arr[0], backSum = arr[n-1];
    long long int ans = 0; int i=0, j = n-1;
    while(i<j)
    {
        if(frontSum == backSum)
        {
            ans = frontSum;
            frontSum = frontSum + arr[i+1];
            i++;
        }
        if(frontSum < backSum)
        {
            frontSum = frontSum + arr[i+1];
            i++;
        }
        if(frontSum > backSum)
        {
            backSum = backSum + arr[j-1];
            j--;
        }
        
    }
    return ans;
}


#include <bits/stdc++.h> 
int findMaxX(int n, vector<vector<int>> &arr, int B)
{
    int start = 0,mid,sum=0,ans=-1;
    int end = B;
    while( start<=end )
    {
        mid = start + (end-start)/2; 
        sum = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<=arr[i][0]; j++)
            {
                if(arr[i][j]> mid)
                    continue;
                sum = sum + arr[i][j];
            }
        }
        
        if (sum > B)
            {
                end = mid-1;
            }
        else
            {  
                ans = mid;    
                start = mid+1;
            }    
    }
    return ans;
}
