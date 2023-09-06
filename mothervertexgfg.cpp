int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	        vector<bool> visited(V, false);

        int ans = -1;
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited);
                ans = i;
            }
        }

        // Check again
        vector<bool> visited2(V, false);
        dfs(ans, adj, visited2);
        for (bool x : visited2) {
            if (!x) return -1;
        }

        return ans;

	}
	 void dfs(int node, vector<int> adj[], vector<bool>& visited) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited);
            }
        }
    }