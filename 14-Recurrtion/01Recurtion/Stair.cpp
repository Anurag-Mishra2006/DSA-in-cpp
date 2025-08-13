// Either one step or two step and their combition
// Give all the ways
// formula ==> stair(n)= stair(n-1) + stair(n-2)
#include<iostream>
using namespace std;

int stair (int n){
    // stair(2)=2; stair(1)=1; base case
    if(n==2) return 2;
    if (n==1) return 1;
    return stair(n-1) + stair(n-2) ; //look like fibonacci
    

}
// When three jumps are allowed 
int threeStair(int n){
    if(n==3) return 3;
    if(n==2) return 2;
    if (n==1) return 1;
    
    return stair(n-1) + stair(n-2) + stair(n-3);

}
int main(){
    cout<<stair(8);
    cout<<endl;
    cout<<threeStair(8);
}
