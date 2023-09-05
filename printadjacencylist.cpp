vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>> adj(V);
          for( int i =0 ; i<edges.size();i++)
            {
            int x=edges[i].first;
            int y=edges[i].second;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        return adj;
    }