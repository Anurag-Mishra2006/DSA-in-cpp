#include <bits/stdc++.h>
using namespace std;

// Memoization : tend to store the value of subproblems in some map/table


int fibo(int n, vector<int>&dp){ // TC: O(n)  || space complexity: O(n) + O(n) ==> recursion stack space + array
    
    if(n == 0 || n == 1)return n;

    if(dp[n] != -1)return dp[n];

    return dp[n] = fibo(n-1,dp)+fibo(n-2,dp);

}

int main() {
    int n;
    cin>>n;
    vector<int>dp(n+1, -1);
    cout<<fibo(n,dp);


    return 0;
}