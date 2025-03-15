//  Remove the consecutive duplicate in a string 

#include <bits/stdc++.h>
using namespace std;

string removedDupliConsString(string s){
    stack<char>st;
    string ans = "";
    for(int i =0; i<s.size(); i++){
        if(st.top() != s[i]){
            st.push(s[i]);
            ans += st.top();
        }
    }
    return ans;
     
}

int main() {
    string s = "aaabbcddaabffg";
    cout<<removedDupliConsString(s);
    return 0;
}