#include<iostream>
using namespace std;
int main(){
    int x =122;
    int *p=&x;//This * operator known as derefretor
    // >>>>>> Work Of Star  Operator: p ke andar jo address rakha h us address pe jao,and waha ki value print kar do 
    cout<<p<<endl;
    cout<<*p<<endl;//Acessing the value of x
    *p=90;//changing the value of x with actual x
    cout<<x;//print new value of x
}