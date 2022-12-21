#include <bits/stdc++.h> 
int findPosition(vector<int>& arr, int n, int k)
{
    int start = 0,pivot1,pivot2,index=-1,mid;
    int end = n-1;
    while( start<end )
    {
        mid = start + (end-start)/2; 
        if(arr[mid]>=arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    pivot1 = start;
    pivot2 = pivot1-1;
    end = n-1;
    if(arr[pivot1]<=k && k<=arr[end])
    {
        while( pivot1<=end )
        {
            mid = pivot1 + (end-pivot1)/2; 
            if(k == arr[mid])
            {
                index = mid;
                return index;
            }
            if (k < arr[mid])
            {
                end = mid-1;
            }
            else
            {
                pivot1 = mid+1;
            }        
        }
    }
    else
    {
        start = 0;
        while( start<=pivot2)
        {
            mid = start + ((pivot2)-start)/2; 
            if(k == arr[mid])
            {
                index = mid;
                return index;
            }
            if (k < arr[mid])
            {
                pivot2 = mid-1;
            }
            else
            {
                start = mid+1;
            }        
        }
    }  
    return -1;
}
