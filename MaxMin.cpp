#include<iostream>

using namespace std;

int MaxArray(int num[], int n)
{
    int max;
    max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max = num[i];
        }
        
    }
    return max;
}


int MinArray(int num[], int n)
{
    int min;
    min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i]<min)
        {
            min = num[i];
        }
        
    }
    return min;
}

int main()
{
    int size,arr[100];
    cout<<"Enter the size of array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the value at "<<i<<" index here: "<<endl;
        cin>>arr[i];
    }
    
    int maxi = MaxArray( arr, size);
    int mini = MinArray(arr, size);
    cout<<"The maximum number in this array is: "<<maxi<<endl;
    cout<<"The minimum number in this array is: "<<mini<<endl;
    return 0;
}