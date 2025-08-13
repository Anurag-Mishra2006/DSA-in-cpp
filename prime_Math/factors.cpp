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
    int even = 0;
    int odd = 0;
    for(int i=1;i*i<= num;i++){
        if(num%i==0){
            cout<<i<<" ";
            if(i % 2 == 0)even++;
            else odd++;
        }
    }
    for(int i=sqrt(num); i>=1; i--){
        if(num%i==0){
            cout<<num/i<<" ";
            if(num/i %2 ==0)even++;
            else odd++;
        }
    }
    cout<<endl;
    cout<<even<<" "<<odd<<endl;
    return 0;
}