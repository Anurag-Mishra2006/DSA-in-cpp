#include <bits/stdc++.h>
using namespace std;

int main() {
    //  13==>  1    1   0   1
    // i =2; after clr => 1 0  0 1
    int n , i;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"Enter the bit  ";
    cin>>i;
    n= ~(~n | (1<<i));
    cout<<n;
    // or we can do this
    cout<<"\n";
    n = n &(~(1<<i));
    cout<<n;
    return 0;
}