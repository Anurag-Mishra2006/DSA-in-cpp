// subarray -> vo subsequence jo ki continuous fashion me ho 
//  continuous part of array is called as subarray

#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int>v , int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subarray(v,arr,n,idx+1);
    if(v.size()==0 || arr[idx-1]  == v[v.size()-1]){
        v.push_back(arr[idx]);
        subarray(v,arr,n,idx+1);
    }
    // else if(arr[idx-1]  == v[v.size()-1] ){
    //     v.push_back(arr[idx]);
    //     subarray(v,arr,n,idx +1);
    // }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0; i<n;i++){ //start of subarray
    //     for(int k=i ; k<n;k++){
    //         for(int j =i ; j<=k ; j++){
    //             cout<<arr[j];
    //         }
    //         cout<<endl;
    //     }
    // }

    vector<int>v;
    subarray(v,arr,n,0);
}