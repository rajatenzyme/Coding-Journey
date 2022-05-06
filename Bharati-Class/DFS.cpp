void dfs(int src, vector<int> adj[], vector<int> &vis, vector<int> &ans){
        
        vis[src] = 1;
        ans.push_back(src);
        
        for(auto x : adj[src]){
            if(!vis[x]){
                dfs(x,adj,vis,ans);
            }
        }
        return;
        
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> ans;
        
        vector<int> vis(V, 0);
        
        dfs(0,adj,vis,ans);
        
        return ans;
      
    }