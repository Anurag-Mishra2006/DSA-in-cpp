#include <bits/stdc++.h>
using namespace std;

// For Prim's algo we need : 1. priority queue {weight, node, parent}
                        //   2. visited array
    


// Time complexity : O(ElogE);

// finding sum of given mst: 
class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        // if we want to return the mst vector then we take parent in consideration
        
        //{weight, node}
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int>vis(V,0);
        
        int mstSum = 0;
        
        pq.push({0,0});
        // E
        while(!pq.empty()){
            // logE
            auto it = pq.top();
            pq.pop();
            int weight = it.first;
            int node= it.second;
            
            if(vis[node] == 1)continue;
            
            vis[node] = 1;
            mstSum += weight;
            // ElogE
            for(auto it : adj[node]){
                int adjNode = it[0];
                int edgeWeight = it[1];
                if(vis[adjNode] == 0)
                    pq.push({edgeWeight,adjNode});
            }
        }
        return mstSum;
    }
};
int main() {
    

    return 0;
}