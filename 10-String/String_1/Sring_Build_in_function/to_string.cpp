// It convert  integer to string
#include<iostream>
#include<string>
using namespace std;
int main(){
    int x=1234567;
    //  to_string is used to convert both interger to long long datatype to string 
    
    string s=to_string(x);
    cout<<s;
}