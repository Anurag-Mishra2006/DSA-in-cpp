#include <bits/stdc++.h>
using namespace std;

// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
       
        vector<vector<pair<int,int>>>adj(V);
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];
            adj[u].push_back({v,w}); // {node,weight};
            adj[v].push_back({u,w});
        }
        
        vector<int>distance(V, 1e9);
        distance[src] = 0;
       
        set<pair<int,int>>st; //{dist,node}
        st.insert({0,src});
        while(!st.empty()){
            auto it = *(st.begin()); // point to the top and * give the value of top
            int node = it.second;
            int dis = it.first;
            st.erase(it);
            
            for(auto it: adj[node]){
                int adjNode = it.first;
                int edgeWeight = it.second;
                
                if(dis + edgeWeight < distance[adjNode]){
                    
                    if(distance[adjNode] != 1e9){
                        // erase if it exits
                        st.erase({distance[adjNode],adjNode});
                    }
                    
                    distance[adjNode] = dis + edgeWeight;
                    st.insert({distance[adjNode],adjNode});
                }
            }
            
        }
        
        return distance;
    }
};

int main() {
    
    return 0;
}