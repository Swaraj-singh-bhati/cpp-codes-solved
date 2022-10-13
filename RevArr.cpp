#include<iostream>

using namespace std;

void ReverseArray(int num[],int n)
{
    int j,k;
    k = n;
    for (int i = 0; i < n/2; i++,k--)
    {
        swap(num[i],num[k-1]);
    }
    
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
    
    ReverseArray(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<"The value at "<<i<<" index is: "<< arr[i] <<endl;
    }

    return 0;
}