//  given an array of integer nums and an integer k ,, return the total numbers of subarrays whose sum equal to k
#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums , int k){
    unordered_map<int , int>m;
    m[0]=1;
    int prefixSum = 0;
    int total = 0 ;
    for(int i = 0 ;i<nums.size() ;i++){
        prefixSum += nums[i];
        if(m.count(prefixSum -k)){
            total += m[prefixSum-k];
            m[prefixSum]++;
        }
        else m[prefixSum]++; // increase the count of prefix sum

    }
    return total;
}

int main() {
    vector<int>nums = {2,1,7,-4,2,1,3,4,-15,2,-3,6};
    cout<<subarraySum(nums , 6);
    return 0;
}