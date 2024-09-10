#include<iostream>
using namespace std;
int main(){
    int n,lastdigits;
    cin>>n;
    int reverse=0;
    while(n>0){
        reverse*=10;
        lastdigits=n%10;
        reverse+=lastdigits;
        n=n/10;
         
    }
cout<<reverse;
}