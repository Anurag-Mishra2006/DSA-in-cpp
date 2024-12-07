#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return;//base case 
    print(n-1);//recursive call
    // jaise hi print(0) se return ayega to print(1) ki call done ho chuki hogi
    // so now move to the code written below the recursive call

    cout<<n<<endl;  
    // if we just put this code above the recursive call 
    /*
    5
    4
    3
    2
    1
    */
}
int main(){
    print(5);
}