#include <bits/stdc++.h>
using namespace std;

 
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        map<int , int> m;
        for(int i =0 ; i<nums.size(); i++){
            m[nums[i]] ++;
        }
        for(auto &pr : m){
            if(pr.second >nums.size()/3){
                v.push_back(pr.first);
            }
        }
        return v;// return the vector in which element has frequency more than n/3
        
    }

int main() {
    vector<int>nums = {1,2,1,5,1,2,2,1};
    vector<int>ans = majorityElement(nums) ;
    for(auto el:ans){
        cout<<el<<"  ";
    }
    
}