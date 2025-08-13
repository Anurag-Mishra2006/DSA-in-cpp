// Multi-source shortest path
// detect negative cycle
// Note-> go via every node or edge

// the algo is not much intuitive as the other ones. It is more of a brute force, where all combination of paths have be tried to get the shortest paths.
#include <bits/stdc++.h>
using namespace std;

// User function template for C++

class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        // Code here
        int n = dist.size();
        
        
        for(int k = 0; k < n; k++){
            
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n;j++){
                    
                    if(dist[i][k] != 1e8 && dist[k][j] != 1e8)
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    
                }
            }
        }
        
        // HOW IT DETECT NEGATIVE CYCLE: 
        for(int i = 0; i < n; i++){
            if(dist[i][i] < 0)cout<< "Negative cycle detected";
            
        }
        
    }
};

int main() {
    
    return 0;
}