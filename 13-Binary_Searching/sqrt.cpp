#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int lo = 0 ;
    int ans =-1 ;
    int hi = x;
    while(lo <= hi ){
        int mid = lo + (hi - lo)/2;
        if(mid * mid ==x) {ans = mid;
        break;}
        else if(mid * mid > x) hi = mid -1 ;
        else lo = mid +1;
    }
    if(ans == -1) cout<<hi;
}