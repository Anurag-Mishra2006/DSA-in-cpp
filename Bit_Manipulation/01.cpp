//  CONVERTING NUMBER TO THE BINARY FORM 

#include <bits/stdc++.h>
using namespace std;

string reverse(string s){
    int n = s.length();
    string res = "";
    for(int i =n-1;i>=0;i--){
        res+= s[i];

    }
    return res;
}
string displayToBinary(int num){
   string  res = "";
   while(num > 0){
    if(num%2==1){
        res +='1';

    }
    else res += '0';
    num /=2;
   }
   return reverse(res);
   
}


int main() {
    
    int num = 9;
    cout<<displayToBinary(num);
    return 0;
}