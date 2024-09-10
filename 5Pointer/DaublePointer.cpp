// it is use to store the address of pointer
#include<iostream>
using namespace std;
int main(){
    int x=5;
    int *ptr=&x;
    int **p=&ptr;
    cout<<x<<endl;
    cout<<ptr<<endl;// 0x61ff08 Address of x
    cout<<p<<endl;// 0x61ff04   Address of pointer ptr
    cout<<*p; // 0x61ff08 adress of x
    


}