bool isPossible( vector<int> boards,int k, int m,int mid)
{
    int painterCount = 1, timeSum = 0;
    for(int i=0; i<m; i++)
    {
        if(timeSum + boards[i] <= mid)
        {
            timeSum += boards[i];
        }
        else
        {
            painterCount++;
            if(painterCount > k || boards[i] > mid )
            {
                return false;
            }
            timeSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0,e,mid, sum = 0;
    int m = boards.size();
    for(int i=0; i<m; i++)
    {
        sum += boards[i];
    }
    e = sum;
    mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e)
    {
        if(isPossible(boards,k,m,mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
