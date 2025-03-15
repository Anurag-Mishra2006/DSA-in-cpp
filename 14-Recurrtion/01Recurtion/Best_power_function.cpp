#include<iostream>
using namespace std;
// Time complexity ==> log(n) and space complexity ==> log(n)
int pow(int a , int b){
    if(b==1)return a;
   
    if(b %2==0){
        int ans = pow(a,b/2);
        return ans * ans;
    }
    else if(b %2 !=0){
        int ans = pow(a,b/2) ;
        return ans * ans *a;
    }

     
}
int main(){
    cout<<pow(3,6);
}