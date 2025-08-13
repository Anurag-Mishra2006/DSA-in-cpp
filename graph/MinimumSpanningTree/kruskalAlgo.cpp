// Kruskal's algo
//  1. sort all the edges according to weight

#include <bits/stdc++.h>
using namespace std;
class DisjointSet{
    private: 
    vector<int>rank,parent,size;
    public:
        DisjointSet(int n){
            rank.resize(n+1, 0);
            parent.resize(n+1);
            size.resize(n+1,1);

            for(int i =0; i < n+1; i++)parent[i] = i;

        }
        int findUParent(int node){
            if(node== parent[node])return node;
            return parent[node] = findUParent(parent[node]);

        }
        void unionByRank(int u, int v){
            int ultimateP_u = findUParent(u);
            int ultimateP_v = findUParent(v);
            if(ultimateP_u == ultimateP_v)return ; // already in the same set

            if(rank[ultimateP_u] < rank[ultimateP_v]){
                parent[ultimateP_u] = ultimateP_v; // attach u under v
            }
            else if(rank[ultimateP_u] > rank[ultimateP_v]){
                parent[ultimateP_v] = ultimateP_u;//attach v under u
            }
            else {
                // if rank of both the ultimate parent are equal then do this
                parent[ultimateP_v] = ultimateP_u;
                rank[ultimateP_u]++; // incease rank since height incresed

            } 
        }
        void unionBySize(int u, int v){
            int ultimateP_u = findUParent(u);
            int ultimateP_v = findUParent(v);
            if(ultimateP_u == ultimateP_v)return ;

            if(size[ultimateP_u] < size[ultimateP_v]){
                parent[ultimateP_u] = ultimateP_v;
                size[ultimateP_v] += size[ultimateP_u];
            }
            else {
                // if size of both the ultimate parent are equal then do this
                parent[ultimateP_v] = ultimateP_u;
                size[ultimateP_u]+= size[ultimateP_v];
            } 

        }
        
};

class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        vector<pair<int,pair<int,int>>>edges;
        
        // O(N+ E)
        for(int i = 0;  i < V; i++){
            for(auto it: adj[i]){
                int adjNode = it[0];
                int wt = it[1];
                int node = i;
                edges.push_back({wt,{node,adjNode}});

            }
        }

        DisjointSet ds(V);
        // M log M
        sort(edges.begin(),edges.end());
        int mstWt = 0;
        // M * 4 * a * 2
        for(auto it: edges){
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;

            if(ds.findUParent(u) != ds.findUParent(v)){
                mstWt += wt;
                // for mst vector mstV.push({u,v})
                // now made the disjoint set
                ds.unionByRank(u,v);
            }
        }
        return mstWt;
    }
};

int main() {
    
    return 0;
}