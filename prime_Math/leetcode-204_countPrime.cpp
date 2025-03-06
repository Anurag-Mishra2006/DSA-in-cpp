/* Given an integer n, return the number of prime numbers that are strictly less than n.
 */

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
//  this give tle
int main() {
    int n,count=0;
    cin>>n;
    for(int i =2;i<n;i++){
        if(isPrime(i))count++;
    }
    cout<<count;
    return 0;
}