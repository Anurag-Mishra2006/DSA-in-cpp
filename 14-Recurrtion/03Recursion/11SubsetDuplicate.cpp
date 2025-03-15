#include<iostream>
#include<string>
#include<vector>
using namespace std;

void StoreSubset(string ans,string original,vector<string>&v,bool flag){
    if(original.length()==0){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag==true)StoreSubset(ans+ch,original.substr(1),v,true); 
        StoreSubset(ans,original.substr(1),v,true);
        return; // required because the below code will not run
    }
    char dh = original[1];
    if(ch==dh){ // duplicate
       if(flag==true)StoreSubset(ans+ch,original.substr(1),v,true);
        StoreSubset(ans,original.substr(1),v,false);
    }
        
   else{ // non-duplicate
        if(flag==true)StoreSubset(ans+ch,original.substr(1),v,true);
        StoreSubset(ans,original.substr(1),v,true);
   }
    
}
int main(){
    string str = "aab";
    vector<string>v;
   StoreSubset("",str,v,true);
   for(string element:v){
    cout<<element<<endl;
   }
}