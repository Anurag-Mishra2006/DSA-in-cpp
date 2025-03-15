#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // set mean the binary digit of the ith place ==1
    /*
        i.e n = 13 ; i=1,2;
        13 ===> 1   1   0   1
        i==>    3   2   1   0
                for i =1 it is not set
                for i = 2 it is set
    */
//    1<<2 ==> 1   0   0
/*
    1   1   0   1
   &    1   0   0
   -----------------------
   0    1   0    0  --> this give me a number which is greater than 0

*/
// LOGIC USING LEFT SWIFT
    int n , i;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"Enter the index that you want to check ";
    cin>>i;
    if(n &(1<<i)){
        cout<<"true ";
    }
    else cout<<"false ";

    //  LOGIC USING RIGHT SWIFT
    if(1&(n>>i)){
        cout<<"true ";
    }
    else cout<<"false ";

    return 0;
}