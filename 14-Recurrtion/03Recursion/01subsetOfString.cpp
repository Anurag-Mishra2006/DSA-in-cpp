#include<iostream>
#include<string>
using namespace std;

void printSubset(string ans,string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    printSubset(ans,original.substr(1));
    printSubset(ans+ch,original.substr(1));
    
}
void Printsubset2(string ans , string original,int idx){
    // base case 
    if(original.length()==idx){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx]; 
    Printsubset2(ans,original,idx+1);
    Printsubset2(ans+ch,original,idx+1);
}
int main(){
    string str = "abc";
    //printSubset("",str);
    Printsubset2("",str,0);
}