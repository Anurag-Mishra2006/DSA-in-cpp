#include <bits/stdc++.h>
using namespace std;

// TC : O(ElogV) // E : no of edges and V no of nodes
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
        // {distance,node}
        // priority_queue<pair<int, int>>pq; by default it is max heap but this algo needs min-heap
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        pq.push({0, src});
        while(!pq.empty()){
            
            int node = pq.top().second;
            int dis = pq.top().first;
            pq.pop();
            for(auto it : adj[node]){
                int edgeWeight = it.second;
                int adjNode = it.first;
                if(distance[adjNode] > edgeWeight +dis){
                    distance[adjNode] = edgeWeight +dis;
                    pq.push({distance[adjNode], adjNode});
                }
                
            }
        }
        return distance;
    }
};

int main() {
    
    return 0;
}