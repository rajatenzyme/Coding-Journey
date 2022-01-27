#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    //Assuming 1-based graph index
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(auto it : adj){
        cout<<it<<" ";
    }
}

//weighted graph

int main(){
    int n, m;
    cin>>n>>m;
    //Assuming 1-based graph index
    vector<pair<int,int>> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }

    for(auto it : adj){
        cout<<it<<" ";
    }
}