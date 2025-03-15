#include<iostream>
#include<string>
#include<algorithm>//for reverse add this header
using namespace std;
int main(){
    string str="TinkuMishra";
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    reverse(str.begin()+5,str.end());
    cout<<str<<endl;
    reverse(str.begin(),str.begin()+6);//index+1
    cout<<str<<endl;
  
}