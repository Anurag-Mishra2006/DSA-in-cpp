#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(7);
    v.push_back(9);
    v.push_back(8);
    v.push_back(4);
    // cout<<v[2]<<endl;
    // // Can also be done with
    // cout<<v.at(2);
// Sorting means putting element in accending order
    for(int i=0;i<v.size();i++){
        cout<<v.at(i) << " ";
    }
    cout<<endl;
    // sort
    
    sort(v.begin() , v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i) << " ";
    }



}