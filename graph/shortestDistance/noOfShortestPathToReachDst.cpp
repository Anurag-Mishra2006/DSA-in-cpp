#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int modulo = 1e9 + 7;
    int countPaths(int n, vector<vector<int>>& roads) {
        
        vector<vector<pair<int,int>>>adj(n);
        for(auto it : roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});

        }

        vector<int>ways(n,0);
        vector<long long>distance(n,1e18);
        // {distance,node}
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>pq;

        distance[0] = 0;
        ways[0] = 1;
        pq.push({0,0});

        while(!pq.empty()){
            long long dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it : adj[node]){
                int adjNode = it.first;
                int edgeWt = it.second;
                // this is the first time I am coming
                // with this short distance

                if(distance[adjNode] > dis + edgeWt){
                    distance[adjNode] = dis + edgeWt;
                    pq.push({distance[adjNode],adjNode});
                    
                    // as first time arriving, so take it as it is
                    ways[adjNode] = ways[node];
                }
                else if(distance[adjNode] == dis + edgeWt)ways[adjNode] =( ways[adjNode] +ways[node] )% modulo;
            }
        }
        // if(ways[n-1] == 0)return -1;
        return ways[n-1] % modulo;

    }
};
int main() {
    
    return 0;
}