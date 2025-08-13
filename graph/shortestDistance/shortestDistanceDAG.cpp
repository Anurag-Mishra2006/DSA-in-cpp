#include <bits/stdc++.h>
using namespace std;
// User Function Template
class Solution {
    private: 
    void topoSortDFS(int node, vector<vector<pair<int,int>>>&adj, 
    vector<int>&vis, stack<int>&st){
        vis[node] = 1;
        
        for(auto it : adj[node]){
            int v = it.first;
            if(!vis[v])topoSortDFS(v,adj,vis,st);
        }
        st.push(node);
        
    }
  public:
    vector<int> shortestPathDAG(int V, vector<vector<int>> &edges, int src) {
        // Code here
        
        vector<vector<pair<int,int>>>adj(V);
        
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            adj[u].push_back({v,wt});
        }
        
        // step -1 topo sort
        stack<int>st;
        vector<int>vis(V, 0);
        
        for(int i = 0;  i < V; i++){
            if(!vis[i])topoSortDFS(i,adj,vis,st);
        }
        
        // step - 2 relaxing the stack
        vector<int>distance(V, INT_MAX);
        
        distance[src]  = 0;
        
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            for(auto it : adj[node]){
                int wt = it.second;
                int v = it.first;
                if(distance[v] > distance[node] + wt)distance[v] = distance[node]+wt;
                
            }
        }
        return distance;
        
    }
};

int main() {
    
    return 0;
}