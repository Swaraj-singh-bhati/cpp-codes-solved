#include<bits/stdc++.h>

void topSort(int node, unordered_map<int, bool>& visited, unordered_map<int,list<int>>& adj,
 stack<int>& s)
{
    visited[node] = true;

    for(auto element : adj[node])
	{
        if(!visited[element])
		{
            topSort(element, visited, adj, s);
        }
    }

    s.push(node);
}

void dfs(int node, unordered_map<int, bool>& visited, unordered_map<int,list<int>>& transpose)
{
    visited[node] = true;   

    for(auto element : transpose[node])
	{
        if(!visited[element])
		{
            dfs(element, visited, transpose);
        }
    }

}

int stronglyConnectedComponents(int V, vector<vector<int>> &edges)
{
	//adj list
    unordered_map<int,list<int>> adj;

    for(int i = 0; i < edges.size(); i++)
	{
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

	//topo sort
    stack<int> topo;
    unordered_map<int, bool> visited;
    for(int i = 0; i < V; i++)
	{
        if(!visited[i])
		{
            topSort(i, visited, adj, topo);
        }
    }

    //transpose the graph
    unordered_map<int,list<int>> transpose;
    for(int i = 0; i < V; i++)
	{
        visited[i] = false;

        for(auto element : adj[i])
		{
            transpose[element].push_back(i);
        }
    }

    //finding the strongly connected components
    int count = 0;

    while(!topo.empty())
	{
        int top = topo.top();
        topo.pop();

        if (!visited[top]) 
		{
          count++;
          dfs(top, visited, transpose);
        }
    }

    return count;
}
