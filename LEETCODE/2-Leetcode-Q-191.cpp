/*
Write a function that takes the binary representation of a positive integer and returns the number of 
set bits
 it has (also known as the Hamming weight).
*/
#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int count=0;
        while(n!=0){
            // Checking last bits
            if(n&1){
                count++;
            }
            n=n>>1; 
        
}
 cout<<count;
}