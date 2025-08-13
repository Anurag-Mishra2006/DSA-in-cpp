#include <bits/stdc++.h>
using namespace std;

void PrintSubWhoseSum_k(int idx, vector<int>store, vector<int>nums,int sum,int k){
    if(sum==k){
        // print subsequence stored in store vector
        if(store.size()==0)cout<<"{ }";
        for(int i = 0; i<store.size(); i++){
            cout<<store[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(idx >= nums.size())return;
    store.push_back(nums[idx]);
    //  INCLUDE CASE: adding to sum
    PrintSubWhoseSum_k(idx + 1, store, nums, sum + nums[idx] , k);
    store.pop_back();
    //  THIS IS EXCLUDE CASE i.e not adding to sum:
    PrintSubWhoseSum_k(idx+ 1, store, nums, sum , k);
}


int main() {
    vector<int>nums = {1,2,1,1};
    vector<int>store;
    PrintSubWhoseSum_k(0,store,nums,0,2);

    return 0;
}