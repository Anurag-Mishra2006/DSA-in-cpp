#include<iostream>
using namespace std;
// using loop
int power2(int a , int b){
    if(a==0 && b==0) return 404;
    if(a==0) return 0;
    int ans=1;
    for(int i = 0; i<b;i++){
        ans = a*ans;
    }
    return ans;
}
int power(int a , int b){  //2*b space is used 
// O(b)stack frames
    if(b==0)return 1;
    return a * power(a,b-1);
}

int main(){
    cout<<power(3,6)<<endl;
    cout<<power2(3,4);
}
// space complexity of recurtion is O(n)stack frames
