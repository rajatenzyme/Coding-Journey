// https://www.spoj.com/problems/PT07Y/

#include<bits/stdc++.h>
using  namespace std;

vector<int> adj[10001];
int vis[10001];

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
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m ;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cc = 0;
    for(int i=1; i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            cc++;
        }
    }
    if(cc==1 && m== n-1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}