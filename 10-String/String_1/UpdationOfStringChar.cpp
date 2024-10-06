#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Tinku Mishra ";
    cout<<str<<endl;
    // str[1]='a';
    //  cout<<str<<endl;
    // //  IN cpp string are Mutable
    
    // Now ek kaam: even pos ko replace karke 'a' bana do;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0)str[i]='a';
    }
    cout<<str<<endl;



}