#include<iostream>
using namespace std;

void fun(){
    cout<<"Hello Anurag  ";
    return ;
}
void gun(int x){
    if(x==0) return;
    fun();
    cout<<"How are you ? \n ";
    gun(x-1);
   
}
void greet(int n){
    if(n==0)return;
    cout<< "Good Morning \n";
    greet(n-1);
}
int main(){
     gun(4);
     cout<<"Number of times that you want to print";
     int n;
     cin>>n;
     greet(n);
}