#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0, sum = 0, minLength = INT_MAX;

   for (int right = 0; right < nums.size(); right++) {
       sum += nums[right];  

       while (sum >= target) {  // Shrink the window
           minLength = min(minLength, right - left + 1);
           sum -= nums[left];  // Remove the leftmost element
           left++;  // Move left pointer
       }
   }
   
   if(minLength == INT_MAX)return 0;
   return minLength;
}
int main() {
    vector<int>nums = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7,nums);
    return 0;
}