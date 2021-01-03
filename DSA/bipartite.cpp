// https://www.spoj.com/problems/BUGLIFE/
#include<bits/stdc++.h>
using namespace std;

vector<int> adj[10001];
int vis[10001], col[10001];

bool dfs(int node, int c)
{
    vis[node] = 1;
    col[node] = c;
    for(int child : adj[node])
    {
        if(!vis[child])
        {
        bool res = dfs(child, c^1);
        if(res == false)
            return false;
        }
        else
        {
           if(col[node] == col[child])
            return false;
        }
    }
    return true;
}

int main()
{
    int t, n, m, a, b;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        cin>>n>>m;
        for(int i=1; i<=n; i++)
        {
            adj[i].clear();
            vis[i] = 0;
        }
        for(int i=1; i<=m; i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        bool flag = true;
        for(int i=1; i<=n; i++)
        {
            if(vis[i] == 0)
            {
                bool res = dfs(i, 0);

                if(res == false)
                {
                    flag = false;
                }
            }
        }
        cout<<"Scenario #"<<tc<<":"<<endl;
        if(flag == false)
        {
            cout<<"Suspicious bugs found!"<<endl;
        }
        else
        {
            cout<<"No suspicious bugs found!"<<endl;
        }
        
    }
}