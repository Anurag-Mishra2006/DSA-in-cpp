// Find the last occurrence of x in the array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(7);
    v.push_back(9);
    v.push_back(8);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(4);

    int x=4;
    int idx=-1;
    // using forward  loop
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx=i;
    // }

    // Using backward loop
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
        idx=i;
        break;
        }
    }
    cout<<idx;

}