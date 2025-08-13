#include <bits/stdc++.h>
using namespace std;

int main() {
    //  n = 12
    // 1  1  0  0
    // now after clearing last set
    // 1  0  0  0

/*  OBSERVATION FOR THIS
1.  n = 16 ; 1  0   0   0   0
    n= 15 ;  0  1   1   1   1

2.  n =40 ; 1  0   1   0   0    0
    n=39 ;  1  0   0   1   1    1
 

*/
    int n , i;
    cout<<"Enter the number ";
    cin>>n;
    n = n &(n-1); // NOTED: // this return the number which is always divisible by 2
    cout<<n;

    return 0;
}