/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,1,1,1};
     int n=v.size();
        // sort (build in function )is of time complexity O(nlogn)
        sort(v.begin(),v.end());
        cout<<v[n/2];

}