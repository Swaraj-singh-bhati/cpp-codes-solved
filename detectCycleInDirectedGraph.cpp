#include<bits/stdc++.h>

bool checkCycleDFS(int node, unordered_map<int,bool>&visited,
unordered_map<int,bool>&dfsVisited, unordered_map<int, list<int>>&adj)
{
  visited[node] = true;
  dfsVisited[node] = true;

  for(int neighbour: adj[node])
  {
    if(!visited[neighbour])
    {
      
      bool cycleFound = checkCycleDFS(neighbour, visited, dfsVisited, adj);

      if (cycleFound) 
      {
        return true;
      }
    } 
    else if (dfsVisited[neighbour]) 
    {
      // visited true
      return true;
    }
  }

  dfsVisited[node] = false;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) 
{
  //create adj list
  unordered_map<int, list<int>> adj;

  for(int i=0;i<edges.size();i++)
  {
    int u = edges[i].first;
    int v = edges[i].second;

    adj[u].push_back(v);
  }

  //call dfs for all components
  unordered_map<int,bool>visited;
  unordered_map<int,bool>dfsVisited;
  
  for(int i=1;i<=n;i++)
  {
    if(!visited[i])
    {
      bool cycleFound = checkCycleDFS(i, visited, dfsVisited, adj);
      if(cycleFound)
        return true;
    } 
  }
  return false;
}


//Using Kahn's algo BFS

#include<bits/stdc++.h>

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) 
{
    //create adj list
    unordered_map<int, list<int> > adj;
    for(int i=0; i<edges.size(); i++)
    {
      int u = edges[i].first - 1;
      int v = edges[i].second - 1;

      adj[u].push_back(v);
    }

    //find all indegrees
    vector<int>indegree(n);
    for(auto i: adj)
    {
      for(auto j: i.second)
      {
        indegree[j]++;
      }
    }

    // push nodes having 0 indegree
    queue<int> q;
    for(int i=0; i<n; i++)
    {
      if(indegree[i] == 0)
      {
        q.push(i);
      }
    }

    // do bfs
    int cnt = 0;
    while(!q.empty())
    {
      int front = q.front();
      q.pop();

      cnt++;

      //neighbour indegree update
      for(auto neighbour: adj[front])
      {
        indegree[neighbour]--;
        if(indegree[neighbour] == 0)
        {
          q.push(neighbour);
        }
      }
    }

    if(cnt == n)
      return false;
    else
      return true;
}
