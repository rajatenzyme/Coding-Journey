vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int>vis(V,0);
        
        queue<int> q;
        q.push(0);
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            vis[curr] = 1;
            ans.push_back(curr);
            
            for(auto x : adj[curr]){
                if(!vis[x]){
                    vis[x] = 1;
                    q.push(x);
                }
            }
        }
        
        return ans;
    }