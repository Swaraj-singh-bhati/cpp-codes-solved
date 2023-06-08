#include<bits/stdc++.h>

void dfs(int node, int parent, int &timer, vector<int> &disc,
vector<int> &low, unordered_map<int, bool> &visited,
 unordered_map<int, list<int>> &adj,vector<vector<int>> &result)
{
    visited[node] = true;
    disc[node] = low[node] = timer++;

    for(auto nbr: adj[node])
    {
        if(parent == nbr)
        {
            continue;
        }
        if(!visited[nbr])
        {
            dfs(nbr, node, timer, disc, low, visited, adj, result);
            low[node] = min(low[node], low[nbr]);

            //check if edge is bridge
            if(low[nbr] > disc[node])
            {
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(nbr);
                result.push_back(ans);
            }
        }
        else
        {
            //back edge
            low[node] = min(low[node], disc[nbr]);
        }
    }
 }
vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) 
{
    //adj list
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> disc(v,-1);
    vector<int> low(v,-1);
    unordered_map<int, bool> visited;

    vector<vector<int>> result;

    //dfs
    for(int i=0; i<v; i++)
    {
        if(!visited[i])
        {
            dfs(i, -1, timer, disc, low, visited, adj, result);
        }
    }
    return result;
}
