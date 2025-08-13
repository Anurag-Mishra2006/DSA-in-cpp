//  Binary Search is only applicable when array is sorted
//  Time complexity of binaary search is O(log n) is better than O(n)
// After each operation the search space reduces as n/2 where n is the length of search space

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,9,15,18,21,27};
    int n=9;
    int x=22;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]==x){
            flag = true; //check mark
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid -1;
    }
    if(flag==false)cout<<arr[hi];

    
}