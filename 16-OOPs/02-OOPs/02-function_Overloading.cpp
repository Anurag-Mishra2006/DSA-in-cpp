//  FUNCTION OVERLOADING
    // creating functionns with same name but different parameters


// POLYMORPHISM --> 1. compile time 
                            //  function overloading
                            //  operator overloading
                //  2. run time  polymorphism
                            //  functionn overriding



#include<iostream>
using namespace std;
void add(int a, int b){
    cout<<a+b;
}
//  we can make function of same name but we have to give them different datatype of parameter
//  its also not allowed to have same return type


void add(int a, double b){
    cout<<a +b;
}
int main(){
    add(5,8);
    cout<<endl;
    add(6,9.60);
}