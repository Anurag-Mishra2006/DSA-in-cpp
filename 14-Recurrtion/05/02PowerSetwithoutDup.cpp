
#include <bits/stdc++.h>
using namespace std;

void findPowerSet(int idx, vector<int>arr, vector<int>store, vector<vector<int>>&ans){
    ans.push_back(store);

    for(int i = idx; i<arr.size(); i++){
        
        if(i > idx && arr[i] == arr[i-1]){
            continue;
        }
        
        store.push_back(arr[i]); 

        findPowerSet(i + 1, arr, store, ans);

        store.pop_back();
    }
}

int main() {
    vector<int>nums = {1,2,2};
    vector<vector<int>>ans;
    vector<int>store;
    sort(nums.begin(), nums.end());
    findPowerSet(0, nums, store, ans);
    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}