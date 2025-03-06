// First negative number in every window of size of k
// arr [] = {2,-3,4,4,-7,-1,4,-2,6} k = 3;
// ans  =   {-3,-3,-7,-7,-1, 2} --> n-k+1
//  brute force
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr={2,-3,4,4,-7,-1,4,-2,6};
    vector<int>ans;
    int k = 3;
    for(int i = 0; i < arr.size()-k+1; i++){
        for(int j = i; j<i+k; j++){
            if(arr[j]<0){
                ans.push_back(arr[j]);
                break;
            }
        }
        cout<<ans[i]<<" ";
    }
    return 0;
}