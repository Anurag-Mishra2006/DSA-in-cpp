#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , i;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"Enter the bit  ";
    cin>>i;
    n =( n | (1<<i));
    cout<<n;
    return 0;
}