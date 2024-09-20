/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int ans=0; 
    cin>>n;
    while(n!=0){
        int digit=n%10;
        ans=ans*10+digit;
        if (ans>INT32_MAX||ans<INT32_MIN){cout<<0;}
         n/=10;

    } 
    cout<<ans;
 
    
 
}
