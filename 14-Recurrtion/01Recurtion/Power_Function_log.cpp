#include<iostream>
using namespace std;

int power(int a ,int n){
    
    
    return  a * power(a , n-1);
}
int power2(int a,int n){
    // Here we are going to find the power funtion in optimise way
    // logarithmic method
    if(n==1) return a;
    if(n%2==0){
        int ans = power2(a ,n/2);
        return ans *ans ;
    }
    else{
        int ans = power2(a ,n/2);
        return ans *ans*a ;

    }
    
}
int main(){
    cout<<power2(2,10);
}