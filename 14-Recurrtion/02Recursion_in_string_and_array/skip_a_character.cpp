#include<iostream>
#include<string>
using namespace std;
// void removeChar(string ans , string original){
//     // base case 
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch=='a')removeChar(ans,original.substr(1)); // this is space ineffecient code

//     else removeChar(ans + ch ,original.substr(1));
// }

void removeChar(string ans , string original,int idx){
    // base case 
    if(original.length()==idx){
        cout<<ans;
        return;
    }
    char ch = original[idx]; 
    if(ch=='a')removeChar(ans,original, idx+1);// Passing index is more convienied method
     
    else removeChar(ans + ch ,original, idx+1);
}
int main(){
    string str = "anurag Mishra";
    removeChar("",str,0);
}