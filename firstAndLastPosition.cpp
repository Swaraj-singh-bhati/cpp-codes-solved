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

//optimised


#include <bits/stdc++.h>
using namespace std; 
int firstOcc(vector<int>& arr, int start, int end, int k, int index)
    {
        if (start > end) 
        {
          return index;
        }
        int mid = start + (end-start)/2; 
        if(arr[mid] == k)
        {
            index = mid;
            end = mid - 1;
            return firstOcc(arr,start,end,k,index);
        }
        if (arr[mid]>k)
        {
            return firstOcc(arr,start,mid-1,k,index);
        }
        else
        {
            return firstOcc(arr,mid+1,end,k,index);
        }
    }

int lastOcc(vector<int>& arr, int start, int end, int k, int index)
    {
        if (start > end) 
        {
          return index;
        }
        int mid = start + (end-start)/2; 
        if(arr[mid] == k)
        {
            index = mid;
            start = mid + 1;
            return lastOcc(arr,start,end,k,index);
        }
        if (arr[mid]>k)
        {
            return lastOcc(arr,start,mid-1,k,index);
        }
        else
        {
            return lastOcc(arr,mid+1,end,k,index);
        }
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> ans;
    int index = -1;
    int start = 0, end = arr.size()-1;
    ans.first= firstOcc(arr,start,end,k,index);
    ans.second= lastOcc(arr,start,end,k,index);
    return ans;
}    
    
