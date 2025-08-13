#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v(5,7); //5 element ka ek array bana h jisme sabhi ki value 7 h
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
     for(int i=0;i<5;i++){
        cout<<v[i]<<"  ";//If size of element is not given we can't excess by this method
    }
}