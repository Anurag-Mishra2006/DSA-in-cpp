//  Smallest value after replacing with sum of prime factors
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2; i*i<n;i++){
        if(n%i==0)return false;
    }
    return true;
}

int smallestValue(int n) {
        if(isPrime(n))return n;
        int sum = 0;
        //  kaam 
        for(int i =1; i < sqrt(n); i++){// TC: O(sqrt(n))
            if(n%i==0 && isPrime(n)){
                int m=n;
                while(m%i==0){ // TC: O(logn)
                    sum += i;
                    m/=i;
                }
            }

        }
        for(int i =sqrt(n); i>=1;i--){
            if(n%i==0 && isPrime(n/i)){
                int m=n;
                while(m%(n/i)==0){
                    sum += (n/i);
                    m/=(n/i);
                }
            }
        }
        if(sum==n)return n;
        return smallestValue(sum);
}
int main() {
    cout<<smallestValue(16);
    return 0;
}