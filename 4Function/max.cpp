#include<iostream>
using namespace std;
int maxthree(int a, int b,int c){
   
    if(a>b && a>c)return a;
    else if(b>c && b>a)return b;
    else return c;
}
 
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<< maxthree(a,b,c);
}