#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter no. of nodes and edges: \n";
    int n,m;
    cin>>n>>m;
    int adj[n+1][m+1];

    // graph here
    cout<<"Enter all nodes: \n";
    for(int i = 0; i < m; i++){
        int node1,node2;
        cin>>node1>>node2;
        adj[node1][node2] = 1;
        adj[node2][node1] = 1;
    }
    
    // checking for isEdge present between nodes
    cout<<"Enter the nodes to check edge: \n";
    int n1,n2;
    cin>>n1>>n2;
    if(adj[n1][n2] == 1 || adj[n2][n1] == 1)cout<<"Yes! Edge is present\n";
    else cout<<"Ohh. Edge is not present.\n";

    return 0;
}