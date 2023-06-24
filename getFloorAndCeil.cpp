//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) 
{
    int chota = -1, bada = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i] <= x && arr[i] >= chota)
        {
            chota = arr[i];
        }
        if(arr[i] >= x && arr[i] <= bada)
        {
            bada = arr[i];
        }
    }
    if(bada == INT_MAX)
        return {chota, -1};
    
    return {chota, bada};
}
