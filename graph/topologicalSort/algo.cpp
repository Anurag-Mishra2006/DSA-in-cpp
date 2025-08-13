#include <bits/stdc++.h>
using namespace std;

// It is only applicable for the DAG--Directed Acyclic Graph
//  In topological sorting, node u will always \
appear before node v if there is a directed edge from node u towards node v(u -> v).

// The topological sorting of a directed acyclic graph is nothing but\
 the linear ordering of vertices such that if there is an edge\
between node u and v(u -> v), node u appears before v in that ordering.


class Solution {
  public:
    void dfs(int node, int vis[], vector<int>adj[], stack<int>&st){
        vis[node] = 1;
        
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it, vis,adj,st);
            }
        }
        st.push(node);
    }

    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        //  edges[][] = [[3, 0], [1, 0], [2, 0]] 3->0 1->0  2->0

        // https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700255/Web/Other/blobid0_1744196747.jpg
        
        vector<int>answer;
        stack<int>st;
        int vis[V] = {0};
        vector<int>adj[V];
        
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
        }
        
        for(int i = 0; i <V; i++){
            if(!vis[i]){
                dfs(i,vis,adj,st);
            }
        }
        
        while(!st.empty()){
            answer.push_back(st.top());
            st.pop();
        }
        return answer;
    }
};


int main() {
    
    return 0;
}