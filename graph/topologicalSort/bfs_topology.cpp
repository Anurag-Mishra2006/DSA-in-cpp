// Also known as Kahn's algorithm
//  --> using BFS algo to sort in topological order

/*
    INITIAL CONFIGURE: 
1.Indegree Array: Initially all elements are set to 0. \
    Then, We will count the incoming edges for a node and store it in this array. \
    For example, if indegree of node 3 is 2, indegree[3] = 2.

2. Queue: As we will use BFS, a queue is required. Initially, the node with indegree 0 will be pushed into the queue.

3.  array: Initially empty and is used to store the linear ordering.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        
        vector<int>topo;
        queue<int>q;
        int indegree[V] = {0};
        vector<int>adj[V];
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
        }
        for(int i =0; i < V; i++){
            for(auto it :adj[i]){
                indegree[it]++;
            }
        }
        for(int i =0 ; i < V; i++){
            if(indegree[i] == 0)q.push(i);
        }
        while(!q.empty()){
            int  node = q.front();
            q.pop();
            
            topo.push_back(node);
            
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it] == 0)q.push(it);
            }
        }
        return topo;
        
    }
};

int main() {
    
    return 0;
}