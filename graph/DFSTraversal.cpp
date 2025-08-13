#include <bits/stdc++.h>
using namespace std; // this code for 0 based index

void dfsTraversal(int node, vector<int>adj[], int vis[], vector<int>&list){
    vis[node] = 1;
    list.push_back(node);

    for(auto it : adj[node]){
        if(!vis[node]) dfsTraversal(it, adj, vis, list);
    }
}
vector<int>dfs(int n, vector<int>adj[]){
    vector<int>list;
    int n;
    int vis[n] = {0};
    int start = 0;

    dfsTraversal(start, adj, vis, list);
    return list;
}
int main() {
    

    return 0;
}