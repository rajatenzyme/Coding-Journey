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
    int cc = 0;
    for(int i=1;i<=4; i++)
    {
        if(visited[i] == false)
        dfs(i);
        cc++;
    }
    cout<<cc<<" ";
    
}