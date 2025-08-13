#include<iostream>
using namespace std;
int main(){
    int a = 5, b=5;//  101
    int c1 = a & b; // all true -> true 
    //  if 1 false  -> false;
    int c2= a | b;
    //  anyone true -> true;
    int c = a ^ b;
    // if no of 1s -> odd => 1;
    //  if no of 1s -> even => 0;.
    /*
            1   0    1
            1   0    1
           ------------------
            0    0    0 (no of 1 in this row is 2==> even so 0)
                (no of 1 in this row is 0==> even so 0)
    */
    int c3 = a<<4;// left swift --> multiply by 2
    //  num<<k; ===> num * 2^k
    int c4 = a>>4; // right swift--> divided by 2
    cout<< c1<<endl<<c2<<endl<<c<<endl;
    cout<<c3<<endl<<c4;
}