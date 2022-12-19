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
