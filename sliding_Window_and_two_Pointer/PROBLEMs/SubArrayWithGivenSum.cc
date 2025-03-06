#include <bits/stdc++.h>
using namespace std;

int main() {
    //  given a array of non-negative intergers and interger sum 
    //  You need to return the left and right indexes of that subarray
    int arr[] = {15,2, 4, 8, 9, 5, 10, 23},target = 23;
    int sum = 0 , n = sizeof(arr)/4;
    int start =0 , last =0;
    vector<int>v;
    while(last < n){
        sum+= arr[last];
        while(sum>target && start<=last){
            sum -= arr[start];
            start++;
        }
        if(sum == target){
            v.push_back(start +1);
            v.push_back(last+1);
            break;
        }
        last++;
    }
    if(!v.empty()){
        for(int i =0 ; i< 2 ; i++){
            cout<<v[i]<<" ";
        }
    }else cout<<"No subarray found";
    return 0;
}