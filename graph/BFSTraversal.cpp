#include <bits/stdc++.h>
using namespace std;

// 0-based node
vector<int>bfsTraversal(int n, vector<int>adj[]){
    int visited[n] = {0};
    visited[0] = 1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it : adj[node]){

            if(!visited[it]){
                visited[it] = 1;
                q.push(it);
            }
        }
        
    }
    return bfs;
}

int main() {
    
    return 0;
}