#include<bits/stdc++.h>
using namespace std;
#define N 1000
bool visited[N];
vector<int> adj[N];

void dfs(int s)
{
    if(visited[s]) return;
    visited[s] = true;
    for(auto u: adj[s])
    {
        dfs(u);
    }
}

int main()
{
    int n=6;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        adj[p].push_back(q);
    }
    dfs(2);
    for(int i=0; i<4; i++)
    {
        cout<<visited[i]<<" ";
    }
    
}