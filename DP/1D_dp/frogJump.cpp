// There is a frog o the 1st step of an N  stairs long staircase. 
// The frog want to reach the Nth stair. Height[i] is the height of the (i + 1)th stair.
// If frog jumps from i-th to j-th stair, the energy lost in the jump is given by Height[i-1] - height[j-1].
// In the frog is on i-th staircase, he can jump either to (i+1)th stair or to (i + 2)th stair. 
// Your task is to find the minimum total energy ued by  the frog to reach from 1st stair to Nth stair

#include <bits/stdc++.h>
using namespace std;
/* Recursive Approach : 
    1. express the problem in terms of indexs
    2. Do all stuff on that index
    3. Take the minimum of all stuff    
*/

// tabulation : bottom-up: 
class Solution {
  public:
        int minCost(vector<int>& height) {
            // Code here
            int n = height.size();
            vector<int>dp(n,0);

            dp[0] = 0;
            for(int i = 1; i < n; i++){
                int fs = dp[i-1] + abs(height[i]-height[i -1]);
                int ss = INT_MAX;
                if(i > 1)ss = dp[i-2] + abs(height[i] - height
                [i-2]);

                dp[i] = min(fs,ss);
            }
            return dp[n-1];
            
        }
    };

    //      using Dynamic Programming: using memoization
    // TOP-DOWN
    class Solution {
    public:
        int minCostHelper(int idx, vector<int>&arr,vector<int>&dp){
            if(idx == 0)return 0;
            
            if(dp[idx] != -1)return dp[idx];
            int left = minCostHelper(idx - 1, arr,dp)+ abs(arr[idx] - arr[idx-1]) ;
            int right = INT_MAX;
            if(idx > 1)right = minCostHelper(idx - 2, arr,dp) + abs(arr[idx] - arr[idx - 2]);
            return dp[idx] = min(left,right);
        }
        int minCost(vector<int>& height) {
            // Code here
            int n = height.size();
            vector<int>dp(n+1,-1);
            int ans = minCostHelper(n-1,height,dp);
            return ans;
            
        }
    };

// BOTTON-UP: 
/*
    1. Initailize the dp array of the required size and assign all with 0
    2. look the base case : here if(idx == 0)return 0; so write dp[0] = 0;
    3. run the for loop for n times as in the worst case it go to last index
    4. do all same which you did in memoization
*/
int minCost(vector<int>& height) {
    // Code here
    int prev = 0, prev2 = 0;
    for(int i = 1; i < height.size(); i++){
        int fs = prev + abs(height[i] - height[i-1]);
        int ss = INT_MAX;

        if(i > 1)ss = prev2 + abs(height[i] - height[i-2]);
        int curi = min(fs,ss);
        prev2 = prev;
        prev = curi;
    }
    return prev;

}
int main() {
    
    
    return 0;
}