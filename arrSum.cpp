#include<iostream>

using namespace std;

int main()
{
    int size,arr[100],sum = 0;
    cout<<"Enter the size of array: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the value at "<<i<<" index here: "<<endl;
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"The sum of the array elements is : "<<sum;
    return 0;
}
 