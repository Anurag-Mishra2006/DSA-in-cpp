#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr = {7,1,2,5,8,4,9,3,6};
    int n = arr.size();
    int k  = 3;
    int maxSum = INT_MIN;
    int maxIdx = -1 , preSum=0;

    for(int i=0 ;i<k;i++){ // top Operation = k
        preSum +=arr[i];
    }
    maxSum = preSum;

    int start =1;
    int last = k;
    while(last<n){ // top Operation = n-k
        int currSum = preSum + arr[last] - arr[start-1];
        if(maxSum < currSum){
            maxSum = currSum;
            maxIdx = start;
        }
        preSum = currSum;
        start++;
        last++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;
    return 0;
}