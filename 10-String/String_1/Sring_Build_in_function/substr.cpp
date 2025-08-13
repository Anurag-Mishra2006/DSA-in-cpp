#include<iostream>
#include<string>
using namespace std;
int main(){
    
    // substr==subtring -->Ek index se le kar dusre index tak continuos string
    string s="Anurag";
    // s.substr(idx)--> iska matalab ae h ki is index and iske aage ke string 
    cout<<s.substr(3)<<endl;//rag
    // substring within the limit
    // s.substr(idx,len)
    cout<<s.substr(1,4);
  
}