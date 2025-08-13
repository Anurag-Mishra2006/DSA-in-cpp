#include<iostream>
#include<vector>
using namespace std;
 
int  main(){
     vector<vector<int>>v(3,vector<int>(4));//3 is no. of vector  and vector<int>(4)by this we allot vectors of size 4 in each row of vector as column
    cout<<v.size()<<endl;//no. of vector or say  row 
    cout<<v[0].size(); //no. of column
    

}