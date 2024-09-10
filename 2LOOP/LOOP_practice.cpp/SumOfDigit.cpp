#include<iostream>
using namespace std;
int main(){
    int n,l;
    cin>>n;
    int sum=0;
    while(n>0){
        l=n%10;
        sum+=l;
        n=n/10;
         
    }
cout<<sum;
}