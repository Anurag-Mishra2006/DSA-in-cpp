#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    //  formation of prefix sum
    for(int i =1 ;i<n ; i++){
        arr[i] += arr[i-1];
    }
    // check if any x exists
    for(int i =1 ;i<n ; i++){
        if(2*arr[i] == arr[n-1]){
            cout<<i;
            break;
        }
    }
    
    return 0;
}