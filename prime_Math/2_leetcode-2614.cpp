#include <bits/stdc++.h>
using namespace std;
/*
You are given a 0-indexed two-dimensional integer array nums.
Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0.

Note that:
An integer is prime if it is greater than 1 and has no positive integer divisors other than 1 and itself.
An integer val is on one of the diagonals of nums if there exists an integer i for which nums[i][i] = val or an i for which nums[i][nums.length - i - 1] = val.
*/
bool isPrime(int n){
    for(int i=2; i*i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int maxPrime=INT_MIN;
        for(int i=0; i<n;i++){
            // for(int j=0;j<n;j++){
            //     if(j==i || j == n-i-1){
            //         if(isPrime(nums[i][j])){
            //             maxPrime = max(nums[i][j],maxPrime);
            //         }
            //     }
            // }
            if(isPrime(nums[i][i]))maxPrime =max(nums[i][i],maxPrime);
            if(isPrime(nums[i][n-i-1]))maxPrime =max(nums[i][i],maxPrime);
             
        }
    
        return maxPrime;
}
 
int main() {
    vector<vector<int>>nums={{1,2,3},{5,17,7},{9,11,10}};
    cout<<diagonalPrime(nums);
    return 0;
}