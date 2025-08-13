// using dfs: 
#include <bits/stdc++.h>
using namespace std;

class Solution {
    private: 
    bool dfsCheck(int node, vector<int>adj[], int vis[], int pathvis[]){
        vis[node] = 1;
        pathvis[node] = 1;
        
        for(auto it : adj[node]){
            if(!vis[it]){
                if(dfsCheck(it, adj, vis, pathvis)== true)return true;
            }
            else if(pathvis[it]){
                
                return true;
            }
        }
        
        pathvis[node] = 0;
        return false;
    }
  public:
    
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code herev
        vector<int>adj[V];
        
        for(auto edge : edges){
            int u = edge[0];
            int v= edge[1];
            adj[u].push_back(v);
        }
        int vis[V] = {0};
        int path[V] = {0};
        
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(dfsCheck(i,adj, vis, path) == true)return true;
            }
        }
        return false;
        
    }
};

int main() {
    
    return 0;
}