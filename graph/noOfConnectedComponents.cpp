#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  void bfs(int row, int col, vector<vector<char>>&grid, 
  vector<vector<int>>&vis,int drow[], int dcol[]){
    
    int n = grid.size(); 
    int m = grid[0].size();
        
        
    vis[row][col] = 1;  
    //    {row,col}
      queue<pair<int, int>>q;
      q.push({row, col});
      
      while(!q.empty()){
          int r = q.front().first;
          int c = q.front().second;
          q.pop();
        //   traverse in the neighbours and marks if its a land
        for(int i = 0 ; i < 8; i++){
            int nrow= drow[i] + r;
            int ncol = c +  dcol[i];
            
            if(nrow >= 0 && nrow < n && ncol >=0 && ncol <m && 
            !vis[nrow][ncol] && grid[nrow][ncol] == 'L'){
                vis[nrow][ncol] = 1;
                q.push({nrow,ncol});
            }
        }
          
      }
  }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        
        int n = grid.size(); 
        int m = grid[0].size();
        int cnt = 0;
        
        int drow[] = {1,-1,0,0,1,-1 , 1, -1};
        int dcol[] = {0,0,1,-1,1,-1,-1,1};
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && grid[i][j] == 'L'){
                    bfs(i,j,grid, vis,drow, dcol);
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};

int main() {
    
    return 0;
}