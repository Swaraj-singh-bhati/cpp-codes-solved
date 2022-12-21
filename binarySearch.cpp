#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0,index,s;
    int end = size-1;
    while( start<=end )
    {
        s = (start+end)/2; 

        if(key == arr[s])
        {
            index = s;
            return index;
        }
        if (key < arr[s])
        {
            end = s-1;
        }
        else
        {
            start = s+1;
        }
        
    }
    return -1;
}

int main()
{
    int odd[5] = {2,5,8,11,45};int ans=0;
    int even[6] = {1,4,7,9,13,15};
    
    ans = BinarySearch(odd,5,45);
    cout<<"The element 11 is present at index "<<ans<<endl;
    return 0;
}
