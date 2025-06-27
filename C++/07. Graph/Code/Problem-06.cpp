class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
         if (source == destination) 
            return true;
        
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        queue<int> q;
        vector<bool> visited(n, false);
        q.push(source);
        visited[source] = true;
        
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            
            for (int neighbor : adj[current]) {
                if (neighbor == destination)
                    return true;

                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        
        return false;
    }
};
