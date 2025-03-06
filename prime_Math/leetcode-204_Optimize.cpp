/* Given an integer n, return the number of prime numbers that are strictly less than n.
 */


// OPTIMIZATION --> SIEVE OF ERATOSTHENESIS
#include <bits/stdc++.h>
using namespace std;
void fillsieve(vector<bool>&sieve){// by reference as we are going to change in the original vector
    int n = sieve.size()-1; 
    for(int i=2;i<= sqrt(n);i++){
        for(int j = i * 2; j <= n; j+=i){
            sieve[j]=0;
        }
    }

}
int main() {
    int n=10;
    int count =0;
    vector<bool>sieve(n+1,1);
    fillsieve(sieve);
    if(n<=2)cout<<0;
    // as asked in the question that all prime number strictly less than n i.e n= n-1
    n = n-1;
    sieve[0]=0;
    sieve[1]=0;
    for(int i=2; i <= n;i++){
        if(sieve[i]==1)count++;
    }
    cout<<count;
    return 0;
}