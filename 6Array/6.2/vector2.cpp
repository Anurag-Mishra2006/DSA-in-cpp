// Operation on vector
// if we want to print the size of vector vector us that facilities
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;//v vector ka size 0 h abhi //You not need mention the size
    v.push_back(6);
    cout<<v.size()<<endl;
     v.push_back(4);
     cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    // if size ki jagah capacity
    cout<<v.capacity();
    


}