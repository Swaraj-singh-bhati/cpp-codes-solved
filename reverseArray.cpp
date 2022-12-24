#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	int size = arr.size();
    int j = size-1;
    for(int i=m+1; i<j; i++)
    {
        swap(arr[i],arr[j]);
        j--;
    }
}
