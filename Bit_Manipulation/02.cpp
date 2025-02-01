//  adding two number without using + operator
#include <bits/stdc++.h>
using namespace std;

int sumTwoInt(int a, int b){
    int carry ;
    while(b !=0){
        carry = (a&b)<<1;
        a = a^b;
        b = carry;
    }
    return a;
}

int main() {
    cout<<sumTwoInt(5 , 8);
    // 5 ==>        1   0   1
    //  8 ==>   1   0   0   0
    // carry 
    // (a&b) ==> 0  0   0   0
    // (a & b)<<1;0 0   0   1
    
    // carry =1;
    // a = (a ^ b)===>      1   0   1
                //       1  0   0   0
                // a===> 1  1   0   1 == 13
    // 
    //  b = 1;
    return 0;
}