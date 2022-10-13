#include<iostream>

using namespace std;

void printArray(int num[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<num[i];
    }
    
}

void SwapAlternate(int num[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i+1<n)
        {
            swap(num[i],num[i+1]);
        }
        
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
    cout<<"The Array before swaping is: "<<endl;

    printArray(arr,size);

    SwapAlternate(arr,size);
 
    cout<<endl<<endl<<"The Array After swaping is: "<<endl;

    printArray(arr,size);

    return 0;
}