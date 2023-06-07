//using DFS

#include <bits/stdc++.h> 

void dfsTopo(unordered_map<int,list<int>>&adj,vector<bool>&visited,stack<int>&s,int node)
{
    visited[node] = 1;


    for(auto neighbour: adj[node])
    {
        if(!visited[neighbour])
        {
            dfsTopo(adj,visited,s,neighbour);
        }
    }
    s.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  
{
    // preparing a adjacency list
    unordered_map<int,list<int>>adj;

    for(int i=0;i<edges.size();i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];


        adj[u].push_back(v);
    }

    vector<bool>visited(v);

    stack<int>s;
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            dfsTopo(adj,visited,s,i);
        }
    }


    vector<int>ans;
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }


    return ans;
}


//using Kahn's algorithm BFS

#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  
{
    //create adj list
    unordered_map<int, list<int> > adj;
    for(int i=0; i<e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    //find all indegrees
    vector<int> indegree(v);
    for(auto i: adj)
    {
        for(auto j: i.second)
        {
            indegree[j]++;
        }
    }

    //push nodes which have 0 indegree
    queue<int> q;
    for(int i=0; i<v; i++)
    {
        if(indegree[i] == 0)
        q.push(i);
    }

    //do bfs
    vector<int> ans;
    while(!q.empty())
    {
        int front = q.front();
        q.pop();

        ans.push_back(front);

        for(auto neighbour: adj[front])
        {
            indegree[neighbour]--;
            if(indegree[neighbour] == 0)
            {
                q.push(neighbour);
            }
        }
    }

    return ans;
}
