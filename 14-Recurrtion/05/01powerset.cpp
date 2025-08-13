#include <bits/stdc++.h>
using namespace std;

void sumSubset(int idx,  vector<int>&arr,int sum , vector<int>&sumSub){
    if(idx == arr.size()){
        sumSub.push_back(sum);
        return;
    }
    //  pick 
    sumSubset(idx + 1, arr, sum+arr[idx], sumSub);

    // not-pick
    sumSubset(idx + 1, arr, sum, sumSub);
}

int main() {
    vector<int>arr= {3,1,4};
    vector<int>sumSub;
    sumSubset(0,arr,0,sumSub);
    sort(sumSub.begin(), sumSub.end());
    for(int ele: sumSub){
        cout<<ele<<" ";
    }
    return 0;
}