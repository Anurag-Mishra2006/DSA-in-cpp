#include<iostream>
using namespace std;
int fac(int n){
    // base case --> use to terminate the recursion and  is necessary
    if(n==1 || n==0) return 1;
    // Recursive call
    return n*fac(n-1);

}
int main(){
    cout<<fac(6);
}