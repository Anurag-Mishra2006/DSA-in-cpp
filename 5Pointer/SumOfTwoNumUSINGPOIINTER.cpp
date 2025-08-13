#include<iostream>
using namespace std;
int main(){
    int x=6;
    int y=7;
    int *p1=&x;
    int *p2=&y;
    cout<< x + *p2;
    cout<<endl;
    *p1 = 93; // with the help of pointer we change the value of the variable
    
    cout<<x + *p2;

}