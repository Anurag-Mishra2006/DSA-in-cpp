#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findCombinations(int idx, vector<int>& store, vector<int>& arr, int currentSum, int target, vector<vector<int>>& ans) {
        if (currentSum == target) {
            ans.push_back(store);
            return;
        }
        
        if (idx >= arr.size() || currentSum > target) {
            return;
        }

        // Include current element
        store.push_back(arr[idx]);
        findCombinations(idx, store, arr, currentSum + arr[idx], target, ans);
        store.pop_back();

        // Exclude current element
        findCombinations(idx + 1, store, arr, currentSum, target, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> store;
        findCombinations(0, store, candidates, 0, target, ans);
        return ans;
    }
};

int main() {
    
    return 0;
}