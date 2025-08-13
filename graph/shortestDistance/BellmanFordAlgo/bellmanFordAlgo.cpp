#include <bits/stdc++.h>
using namespace std;

// Bellman Ford algo is for the DIRECTED GRAPH having negative edges
// DIJKSTRA's algo fail when the edge is negative

// --------------------
// Relax all the edges N-1 times sequentenally
// Relax --> if(dis[u] + wt < dist[v])dist[v] = dist[u] + wt;

// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {

        // Why N-1 time ?
        /*
        since in a graph of N nodes, in worst case, 
        you will take N-1 edges to reach from the first to the last 
        thereby we iterate for N-1 iterations.
        
        Try drawing a graph which takes more than N-1 edges for any path, it is not possible
        
        */
        
        // How to detect negative cyle?
        /*
            On N-th iteration, the relaxation will be done, if the dist[] arrays get reduces then we can say "NEGATIVE CYCLE" is present
            
        */
       
        vector<int>dist(V,1e8);
        dist[src] = 0;
        for(int i = 0; i < V; i++){
            
            for(auto edge: edges){
                if(dist[edge[0]] != 1e8 && dist[edge[0]] + edge[2] < dist[edge[1]]){
                   dist[edge[1]] = edge[2] + dist[edge[0]];
                }
            }
        }
        // one last relaxation for checking negative cycle
        for(auto edge: edges){
            if(dist[edge[0]] != 1e8 && dist[edge[0]] + edge[2] < dist[edge[1]])return {-1};
            
        }
        return dist;
        
    }
};


int main() {
    
    return 0;
}