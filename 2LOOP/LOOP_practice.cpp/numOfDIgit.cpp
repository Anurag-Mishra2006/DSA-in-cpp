#include<iostream>
using namespace std;
int main(){
int n;
cout<<"ENter a number ";
cin>>n;
int count=0;
int a=n;
while(a>0){
    n/10;
    count++;
}
    
cout<<count;
if(a==0)cout<<1;
else cout<<count;

}
