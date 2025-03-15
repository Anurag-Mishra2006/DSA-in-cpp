#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,3,2,4,3,4,1,6};
    vector<int>v;
    int size=sizeof(arr)/4;
    for(int i=0;i<=size-1;i++){
        int r=arr[size-1-i];
        v.push_back(r);
    }
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}