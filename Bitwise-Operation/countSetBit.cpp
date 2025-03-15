#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ,count = 0;
    cout<<"enter the number ";
    cin>>n;
    while(n>=1){
        count += n &1;// (n/2) is divisible by 2 then remainder 0 so count += 0 else count +=1;
        
        // n &1 it is even check --> if even gives 0 else 1
        n = n>>1;// divided by 2
    }
    cout<<count;
    return 0;
}