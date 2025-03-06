//  when opening bracket is before the closing
// like  ()()() --> true
//        (())() --> true
//          )()(  --> false

#include <bits/stdc++.h>
using namespace std;

//  steps :
        // 1. if you see opening bracket --> push
        // 2. if you see a closing bracket, st-> top ko dekho and agar '(' st.pop kar do
        // 3. if st.size() ==0 return true;
bool balancedBracket(string s){
    if(s.length()%2 !=0)return false;
    stack<char>st;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='(')st.push(s[i]);

        else if(s[i]== ')'&& st.size()==0)return false;
        
        else if(s[i] == ')'){
            if(st.top()=='('){
                st.pop();
            }
        }
    }
    return st.size()==0;
}
int main() {
    string s = "()()()";
    // cout<<balancedBracket(s);
    if(balancedBracket(s))cout<<"true";
    else cout<<"false";
    return 0;
}