#include<iostream>
using namespace std;
int main(){
    int a=15;
    int *ptr=&a;
    int b=++(*ptr);// (++ptr it is pre increment )iska matalb *ptr=*ptr+1 and b ki value increse ho kar mil bhi jaye turant
    // i.e a=15 ko replace kar ke a=16 ho gya
    
    cout<<a<<"  "<<b;
}