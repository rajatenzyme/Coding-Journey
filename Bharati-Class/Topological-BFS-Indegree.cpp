vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> ans;
	    vector<int> indegree(V,0);
	    for(int i=0;i<V;i++){
	        for(auto x : adj[i])
	            indegree[x]++;
	    }
	    queue<int> q;
        
	    for(int i = 0; i<indegree.size(); i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int curr = q.front();
	        q.pop();
	        ans.push_back(curr);
	        for(auto x : adj[curr]){
	            indegree[x]--;
	            if(indegree[x] == 0)
	                q.push(x);
	        }
	    }
	    return ans;
	}