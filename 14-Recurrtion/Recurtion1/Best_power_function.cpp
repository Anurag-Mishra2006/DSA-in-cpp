#include<iostream>
using namespace std;
// Time complexity ==> log(n)
int pow(int a , int b){
    if(b==0)return 1;
    if(b==1)return a;
    return a*pow(a,b-1);
     
}
int main(){
    cout<<pow(3,8);
}