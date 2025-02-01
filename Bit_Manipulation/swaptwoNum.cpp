#include <bits/stdc++.h>
using namespace std;

int main() {
    int a =9, b=6;
    // when we take XOR of same num is equal to 0
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b;
    

    return 0;
}