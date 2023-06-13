int minimumCoins(int n, vector<int> days, vector<int> cost) 
{
    int ans = 0;
    queue<pair<int,int>> month;
    queue<pair<int,int>> week;

    for(auto day : days)
    {

        //step 1: Remove expire days from queue
        while(!month.empty() && month.front().first + 30 <= day)
            month.pop();

        while(!week.empty() && week.front().first + 7 <= day)
            week.pop();
        
        //step2: push current days cost
        month.push(make_pair(day, ans+cost[2]));
        week.push(make_pair(day, ans+cost[1]));

        //step3: update ans
        ans = min(ans+cost[0] , min(month.front().second, week.front().second));
    }
    return ans;
}
