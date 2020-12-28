//Author: RAJAT MITTAL
//IIT JAMMU
#include<bits/stdc++.h>
using namespace std;

// vector<int> adj[100001];
// int vis[100001];

void dfs(int s, vector<vector<int>> &adj, vector<bool> &vis)
{
    vis[s] = 1;
    for(auto &u : adj[s])
    {
        if(!vis[u])
        {
            dfs(u,adj,vis);
        }
    }
}


int main()
{
    int n, e, u, v;
    cin>>n>>e;

    vector<vector<int>> adj(n+1);
    vector<bool> vis(n+1,false);

    for(int i =1; i<=e; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cc = 0;
    for(int i=1;i<=n; i++)
    {
        if(!vis[i])
        {
        dfs(i, adj, vis);
        cc++;
        }
    }
    cout<<cc;

}

//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/description/