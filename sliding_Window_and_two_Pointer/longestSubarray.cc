// Longest Subarray with sum <= k;
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
    int maxlen = 0;
    for(int i = 0 ; i<nums.size() ; i++){
        int sum =0 ;
        for(int j =i ; j<nums.size()-1 ;j++){
            sum+=nums[j];
            if(sum <= k)maxlen = max(maxlen , j-i+1);
            else if(sum >k)break;
        }
    }
     cout<<maxlen;
    return 0;
}