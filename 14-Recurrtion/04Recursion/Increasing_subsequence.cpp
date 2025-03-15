// Print all increasing subsequences of length k from first n natural numbers
// --> Subsequence -: kisi bhi element ko utao but in the same direction me hi hona h
    /*
        Characteristics of a subsequence:
    Order is preserved: The elements of a subsequence appear in the same relative order as they do in the original sequence.
    Deletion is allowed: Elements can be removed, but no new elements can be added.
    Can be empty: A subsequence can be empty.    
    */
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void PrintSubset(int arr[],int n,int idx,vector<int>v,int k){
    if(idx==n){
         if(v.size()==k){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            
        cout<<endl;
         }
        return;
    }
    if(v.size()+(n-idx)<k) return; // by this method we improve its time complexity
    
    PrintSubset(arr,n,idx+1,v,k);
    v.push_back(arr[idx]);
    PrintSubset(arr,n,idx+1,v,k);
}

int main(){
    int arr[] = {1,2,3,4,5};
    vector<int>v;
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    PrintSubset(arr,n,0,v,k);

}