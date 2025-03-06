/*
Given a binary array nums and an integer k,
 return the maximum number of consecutive 1's in the array 
 if you can flip at most k 0's.

*/
#include <bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int subCount =0 ;
    unordered_map<int , int>mp;
    int count=0 , maxSum=0 , l =0;
    for(int r = 0; r < nums.size(); r++){
        mp[nums[r]]++;

        while(mp[0]>k){
            mp[nums[l]]--;
            l++;
        }
        maxSum = max(maxSum , r-l+1);
    }
    return maxSum;
}

int main() {
    vector<int>nums={1,1,1,0,0,0,1,1,1,1,0};
    cout<<longestOnes(nums,2);
    return 0;
}