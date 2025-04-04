#include<iostream>
#include<vector>
using namespace std;

vector<int>merge(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1&& j<m){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
            k++;
        }
        else{//arr2[j]<arr1[i];
            res[k]=arr2[j];
            j++;
            k++;
        }
        // For remaining 
        if(i==n){
            if(i==n){
                // arr1 ke sare element utha chuka hun
                while(j<=m-1){
                    res[k]=arr2[j];
                    k++;
                    j++;
                }
            }
        }

        if(j==m){
            // arr2 ke saare elemen utha chuke h
            while(i<=n-1){
                res[k]=arr1[i];
                i++;
                k++;
            }
        }
    }
    return res;
}

int main(){
   vector<int>arr1;
   arr1.push_back(1);
   arr1.push_back(5);
   arr1.push_back(6);
   arr1.push_back(9);
   for(int i=0;i<arr1.size();i++)
     {
        cout<<arr1[i]<<"   ";
     }
     cout<<endl;

    vector<int>arr2 ;
    arr2.push_back(2);
    arr2.push_back(3);
    
    arr2.push_back(10);
    arr2.push_back(12);
    arr2.push_back(74);
    arr2.push_back(99);
    for(int i=0;i<arr2.size();i++)
     {
        cout<<arr2[i]<<"   ";
     }
     cout<<endl;

    vector<int>v=merge(arr1,arr2);
    
    for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<"   ";
     }
}