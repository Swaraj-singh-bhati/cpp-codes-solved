#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key)
{
    
    if(start>end)
    return false;

    int mid = start + (end-start/2);

    if(arr[mid] == key)
    return true;

    if (arr[mid]>key)
    {
        return binarySearch(arr, start, mid-1, key);
    }
    else
    {
        return binarySearch(arr, mid+1, end, key);
    }
    
}

int main()
{
    int arr[7] = {2,5,8,10,13,20,34}; 
    int size = 7;
    int key = 50;

    cout<<"Is present or not "<<binarySearch(arr, 0, 5, key);

    return 0;
}
