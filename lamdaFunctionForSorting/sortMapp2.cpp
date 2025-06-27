#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mpp;
        for(int num : nums){
            mpp[num]++;
        }

        vector<int>unique;
        for(auto it : mpp){
            unique.push_back(it.first);
        }

        sort(unique.begin(), unique.end(), [&](int a, int b){

            if(mpp[a] != mpp[b])return mpp[a] > mpp[b];
            
            return a < b;

        });
        vector<int>answer;
        for(int i = 0; i < k; i++){
            answer.push_back(unique[i]);
        }
        return answer;

    }
};


int main() {
    
    return 0;
}