#include <bits/stdc++.h>
using namespace std;

int main() {
    int maxi=0 ,n,k=14;
    vector<int>nums;
    cout<<"Enter the numbers of elements ";
    cin>>n;
    cout<<"Enter elements ";
    for(int i= 0 ; i< n ; i++){
        int ele ;
        cin>>ele;
        nums.push_back(ele);        
    } 
    //  obtimise way
    //  TC = O(N + N);
    //  SC = O(1)
    int left = 0 , right= 0  , maxlen =0 ;
    int sum =0 ;
    while(right < nums.size()){
        sum += nums[right];
        while(sum > k){
            sum = sum - nums[left];
            left ++;
        }
        if(sum<=k){
            maxlen= max(maxlen , right-left+1);
            
        }
        right ++;
    }
    cout<<maxlen;
    return 0;
}