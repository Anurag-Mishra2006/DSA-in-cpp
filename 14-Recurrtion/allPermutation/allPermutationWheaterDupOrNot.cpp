//  this code is usefull for finding all permutation whether it contains duplicate number or not: 
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> result;
    vector<int> path;
    vector<bool> used;

    void backtrack(vector<int>& nums) {
        if (path.size() == nums.size()) {
            result.push_back(path);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;

            if(i > 0 && nums[i] == nums[i-1] && !used[i-1])continue;

            used[i] = true;
            path.push_back(nums[i]);

            backtrack(nums);

            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        used = vector<bool>(nums.size(), false);
        backtrack(nums);
        return result;
    }
};

int main() {
    
    return 0;
}