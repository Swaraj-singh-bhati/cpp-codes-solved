#include<bits/stdc++.h>

int getKthLargest(vector<int> &arr, int k) 
{
	 // array to store prefix sums
    int N = arr.size();
    int sum[N + 1];
    sum[0] = 0;
    sum[1] = arr[0];
    for (int i = 2; i <= N; i++)
        sum[i] = sum[i - 1] + arr[i - 1];
 
    // priority_queue of min heap
    priority_queue<int, vector<int>, greater<int> > Q;
 
    // loop to calculate the contiguous subarray
    // sum position-wise
    for (int i = 1; i <= N; i++) {
 
        // loop to traverse all positions that
        // form contiguous subarray
        for (int j = i; j <= N; j++) {
            // calculates the contiguous subarray
            // sum from j to i index
            int x = sum[j] - sum[i - 1];
 
            // if queue has less than k elements,
            // then simply push it
            if (Q.size() < k)
                Q.push(x);
 
            else {
                // it the min heap has equal to
                // k elements then just check
                // if the largest kth element is
                // smaller than x then insert
                // else its of no use
                if (Q.top() < x) {
                    Q.pop();
                    Q.push(x);
                }
            }
        }
    }
 
    // the top element will be then kth
    // largest element
    return Q.top();
}
