// 
// question says return the array of size k such that elements are consecutive and sum will max

// arr  = [-1,2,3,3,4,5,-1] k =4

#include <bits/stdc++.h>
using namespace std;

int main() {
    int maxi=0 ,n,k;
    vector<int>nums;
    cout<<"Enter the numbers of elements ";
    cin>>n;
    cout<<"Enter elements ";
    for(int i= 0 ; i< n ; i++){
        int ele ;
        cin>>ele;
        nums.push_back(ele);        
    }
    cout<<"Value of k is ";
    cin>>k;
    for(int i =0 ;i < nums.size()-k ; i++){
        int sum = 0 ;
        for(int j = i ; j < i + k +1; j++){
            sum += nums[j];
        }
        maxi = max(sum , maxi);
    }
    cout<<maxi;

    return 0;
}