void dfs(int src, stack<int> &st, vector<int> &vis, vector<int> adj[]){
	    vis[src] = 1;
	    for(auto x : adj[src]){
	        if(!vis[x]){
	            dfs(x,st,vis,adj);
	            vis[x] = 1;
	        }
	    }
	    st.push(src);
	}
	
vector<int> topoSort(int V, vector<int> adj[]) 
{
    vector<int> ans;
    vector<int> vis(V, 0);
    stack<int> st;
    
    for(int i=0;i<V;i++){
        if(!vis[i])
            dfs(i,st,vis,adj);
    } 
    
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    
    return ans;
}