#include <bits/stdc++.h>
using namespace std;
// TC : O(V + 2E)

class Solution{
    public : 
        vector<int>ShortestPath(vector<vector<int>>&edges, int n, int m, int src){
            // n --> no of nodes and m --> no of edges
            
            // making adj list 
            vector<vector<int>>adj(n);
            for(auto edge : edges){
                adj[edge[0]].push_back(edge[1]);
                adj[edge[1]].push_back(edge[0]);

            }

            // for this we just use plain BFS
            vector<int>distance(n, INT_MAX);
            // {node, distance}
            queue<pair<int,int>>q;
            distance[src] = 0;

            q.push({src,0});
            while(!q.empty()){
                int node = q.front().first;
                int dist = q.front().second;
                q.pop();
                for(auto it : adj[node]){
                    if(distance[it] == INT_MAX){
                        distance[it] = dist + 1;
                        q.push({it,dist+1});
                    }
                }

            }
            // if the sortest distance is not possible we have to change INT_MAX to -1
            
            // this doesn't reflect back to distance
            // for(auto dis : distance){
            //     if(dis == INT_MAX)dis = -1;
            // }

            for(int i = 0; i < n; i++) {
                if(distance[i] == INT_MAX) distance[i] = -1;
            }
            return distance;
            
        }
};

int main() {
    
    return 0;
}