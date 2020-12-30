//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/description/

#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
int vis[100001]; //globally declared, values are initialised to 0

void dfs(int s)
{
    vis[s] = 1;
    for(int u : adj[s])
    {
        if(!vis[u])
        {
            dfs(u);
        }
    }
}


int main()
{
    int n, e, u, v;
    cin>>n>>e;

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
        dfs(i);
        cc++;
        }
    }
    cout<<cc;

}