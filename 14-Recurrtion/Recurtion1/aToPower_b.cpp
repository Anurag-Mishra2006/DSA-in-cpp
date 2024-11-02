#include<iostream>
using namespace std;
int power(int a , int b){//2*b space is used 
// O(b)stack frames
    if(b==0)return 1;
    return a * power(a,b-1);
}
int main(){
     cout<<power(3,8);
}
// space complexity of recurtion is O(n)stack frames
