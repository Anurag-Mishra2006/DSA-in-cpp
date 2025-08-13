#include <bits/stdc++.h>
using namespace std;

// 787.
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {   
        vector<vector<pair<int,int>>>adj(n);

        for(int i = 0; i < flights.size(); i++){
            adj[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }

        queue<pair<int,pair<int,int>>>q; //  {stops, {node,dis}};
        vector<int>dist(n,1e9);
        dist[src] = 0;
        q.push({0,{src,0}});

        while(!q.empty()){
            int stops = q.front().first;
            int node = q.front().second.first;
            int cost = q.front().second.second;
            q.pop();

            if(stops > k)continue;

            for(auto it: adj[node]){
                int adjNode = it.first;
                int edgeWt = it.second;

                if(edgeWt + cost < dist[adjNode] && stops <= k){
                    dist[adjNode] = edgeWt + cost;
                    q.push({stops+1, {adjNode, cost + edgeWt}});
                }
            }
        }


        if(dist[dst] == 1e9)return -1;
        return dist[dst];

        
    }
};

int main() {
    
    return 0;
}