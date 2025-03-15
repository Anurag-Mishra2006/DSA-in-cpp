#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,9,15,18,21,27};
    int n=9;
    int x=15;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]==x){
            flag = true; //check mark
            cout<<arr[mid+1];//   //
            break;
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid -1;
    }
    if(flag==false)cout<<arr[lo];//  // 

    
}