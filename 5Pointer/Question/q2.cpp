#include<iostream>
using namespace std;
int main(){
    int a=15;
    int *ptr=&a;
    int b=(*ptr)++;//It is post increament //phale b ko 15 le lo and then *ptr increase hoga and a=16 
    
    cout<<a<<"  "<<b;
}