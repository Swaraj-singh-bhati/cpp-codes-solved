class Solution {
public:
int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0,size = arr.size();
    int index,mid;
    int end = size-1;
    mid = start + (end-start)/2;
    while( start<=end )
    {
        if(end-start==1)
        {
            if(arr[end]>arr[start])
            return end;
            else
            return start;
        }
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            index = mid;
            return index;
        }
        else if (arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
        {
            start = mid + 1;
        }
        else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1])
        {
            end = mid -1;
        }
        mid = start + (end-start)/2; 
    }
    return -1;
}
};


//with recursion 

class Solution {
public:
    
    int solution(vector<int>& arr, int start, int end, int index,int mid)
    {
        if(start > end)
        return index;
        if(end-start==1)
        {
            if(arr[end]>arr[start])
            return end;
            else
            return start;
        }
        mid = start + (end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            index = mid;
            return index;
        }
        else if (arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
        {
            start = mid + 1;
            index = solution(arr,start,end,index,mid);
        }
        else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1])
        {
            end = mid -1;
            index = solution(arr,start,end,index,mid);
        }
        return index;
    }
    
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int start,end,ans,index,mid;
        start = 0; ans = -1; end = arr.size()-1;
        ans = solution(arr,start,end,index,mid);
        return ans;
    }
};
