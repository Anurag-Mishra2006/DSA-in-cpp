#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
   vector<int> ans(n, 1);

   // Compute prefix products and store them in ans
   int preProduct = 1;
   for (int i = 0; i < n; i++) {
       ans[i] = preProduct;
       preProduct *= nums[i];
   }

   // Compute suffix products and update ans
   int sufProduct = 1;
   for (int i = n - 1; i >= 0; i--) {
       ans[i] *= sufProduct;
       sufProduct *= nums[i];
   }
    return ans;
}
int main() {
    vector<int>nums= {1,2,3,4};
    vector<int>ans = productExceptSelf(nums);
    for(auto ele: ans){
        cout<<ele<<' ';
    }
    return 0;
}