#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter no. of nodes and edges: \n";
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    
    // graph here
    cout<<"Enter all nodes: \n";
    for(int i = 0; i < m; i++){
        int n1, n2;
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);
    }
    for(int i = 0; i <n+1; i++){
        cout<< i <<" -> ";
        for(int n: adj[i] ){
            cout<<n<<" ";
        }
        cout<<endl;
    }
   

    return 0;
}

// for directed graph only do : adj[n1].push_back(n2);
