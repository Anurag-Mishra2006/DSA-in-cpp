#include <bits/stdc++.h>
using namespace std;
int largestSumAfterKNegations(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int count =0, i = 0;
    if(nums[0]>0){
        for(int i =0 ; i<k; i++){
            nums[0] *= -1;
        }
    }
    else{while(nums[i]< 0 && count<k){
        nums[i] *= -1;
        i++;
        count++;
    }
    sort(nums.begin(),nums.end());
    while(count<k){
        nums[0] *= -1;
        count++;
    }}
    int sum =0 ;
    for(int i =0 ; i<nums.size(); i++){
        sum += nums[i];
    }
    return sum;
}
int main() {
    vector<int>nums = {2,-3,-1,5,-4,0};
    cout<<largestSumAfterKNegations(nums , 4);
    return 0;
}