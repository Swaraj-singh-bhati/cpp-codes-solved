#include<iostream>

using namespace std;

void fillArray(int num[],int n)
{
    cout<<"Enter the array values here: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>num[i];
    }
    
}

int uniqueValue(int num[], int n)
{
    int l= 0;
    for (int i = 0; i < n; i++)
    {
       l = l ^ num[i];
    }
    
    return l;
}

int main()
{
    int arr[100],ans,size;
    cout<<"Enter the size of array: ";
    cin>>size;
    fillArray(arr,size);
    ans = uniqueValue(arr,size);
    cout<<"The unique number is : "<<ans;
    return 0;
}