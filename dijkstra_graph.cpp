#include <bits/stdc++.h> 

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) 
{

    unordered_map<int, list<pair<int,int>>> adj;

    for(int i=0; i<edges; i++)
    {
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];

 

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    vector<int> dist(vertices,INT_MAX);
    set<pair<int,int>> st;
    dist[source]=0;
    st.insert({0,source});

    while(!st.empty())
    {
        //fetch top node
        auto top = *(st.begin());
        int NodeDist=top.first;
        int topNode=top.second;

        //erase top node
        st.erase(st.begin());

        //traverse neighbour of top node
        for(auto neighbour:adj[topNode])
        {
            if(NodeDist+ neighbour.second < dist[neighbour.first])
            {
                auto record= st.find({dist[neighbour.first],neighbour.first});

                //if record found then erase
                if(record!=st.end())
                {
                    st.erase(record);
                }

                //distance update
                dist[neighbour.first]=NodeDist+ neighbour.second;

                //record push in set
                st.insert({dist[neighbour.first],neighbour.first});
            }
        }
    }

    return dist;
}
