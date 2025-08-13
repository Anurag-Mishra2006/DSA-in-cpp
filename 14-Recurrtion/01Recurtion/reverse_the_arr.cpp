#include <bits/stdc++.h>
using namespace std;

void reverseArr(int l, int r,int arr[]){
    if(l>=r)return ;
    swap(arr[l],arr[r]);
    reverseArr(l+1, r-1, arr);
}

int main() {
    int arr[]= {1,2,34,5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    int l = 0, r = n-1;
    reverseArr(l,r,arr);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}