// print all the factors of the number
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    // for(int i=1;i*i<=num;i++){
    //     if(i*i==num)cout<<i<<" ";
    //     else if(num%i==0){
    //         cout<<i<<" "<<num/i<<" ";
    //     }
    // }
    //  now making it in increasing order
    for(int i=1;i*i< num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
    for(int i=sqrt(num); i>=1; i--){
        if(num%i==0){
            cout<<num/i<<" ";
        }
    }
    return 0;
}