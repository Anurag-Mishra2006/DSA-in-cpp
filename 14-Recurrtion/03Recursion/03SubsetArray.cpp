#include<iostream>
#include<string>
#include<vector>
using namespace std;

void PrintSubset(int arr[],int n,int idx,vector<int>v){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";

        }
        cout<<endl;
        return;
    }
    PrintSubset(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    PrintSubset(arr,n,idx+1,v);
}

int main(){
    int arr[] = {1,2,3};
    vector<int>v;
    int n = sizeof(arr)/sizeof(arr[0]);
    PrintSubset(arr,n,0,v);

}
//  check leetcode question 78
// check leetcode question 90