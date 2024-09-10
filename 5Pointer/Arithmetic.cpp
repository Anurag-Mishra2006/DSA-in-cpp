#include<iostream>
using namespace std;
int main(){
    int x=7;
    int *ptr=&x;
    cout<<ptr<<endl; //0x61ff08
 
    // ptr=ptr +1;//   0x61ff0c
    (*ptr)++; //When do like this it advised to use parenthesis
    cout<<ptr<<endl;
}