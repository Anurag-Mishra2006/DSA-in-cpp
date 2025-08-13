// Vector is the replacement of array
//Dynamic  array
// Syntax: vector<int>arr;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v; //You need not mention the size
    // Inserting / input do not use [] bracket
    v.push_back(3);
    cout<<v.size()<<endl;
    v.push_back(2);
    cout<<v.size()<<endl;
    v.push_back(4);
    cout<<v.size()<<endl;
    v.push_back(6);
    cout<<v.size()<<endl;//Size of array
    // WHen size=capacity ---> capacity become double of its present
 
 
    // If you want to update/access you can use []
    v[0]=88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";



    // v.pop_back();-------->Last element delete
    // pop_back karne se capacity change nhi hogi



}
