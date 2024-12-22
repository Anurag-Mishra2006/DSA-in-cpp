#include<iostream>
#include<string>
#include<vector>
using namespace std;

void StoreSubset(string ans,string original,vector<string>&v){
    if(original.length()==0){
        v.push_back(ans);
        return;
    }
    char ch = original[0]; 
StoreSubset(ans,original.substr(1),v); 
StoreSubset(ans+ch,original.substr(1),v);
    
}
int main(){
    string str = "abc";
    vector<string>v;
   StoreSubset("",str,v);
   for(string element:v){
    cout<<element<<endl;
   }
}