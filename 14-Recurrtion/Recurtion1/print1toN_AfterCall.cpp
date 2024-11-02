#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return;//base case 
    print(n-1);//recursive call
    // jaise hi print(0) se return ayega to print(1) ki call done ho chuki hogi
    // so now move to the code written below the recursive call

    cout<<n<<endl;  
}
int main(){
    print(5);
}