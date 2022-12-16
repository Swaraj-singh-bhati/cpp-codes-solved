#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0,j = 0;
    vector<int> intersect;
    while(i<n && j<m )
    {
        if(arr1[i] == arr2[j])
        {
            intersect.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return intersect;
}
