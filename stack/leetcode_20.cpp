#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        // If opening bracket, push to stack
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        } 
        // If closing bracket, check stack
        else {
            if (st.empty()) return false; // Closing without openin

            if ((s[i] == ')' && st.top() == '(') || 
                (s[i] == ']' && st.top() == '[') || 
                (s[i] == '}' && st.top() == '{')) {
                st.pop();  
            } 
            
            else {
                return false; 
            }
        }
    }
    return st.empty();
}

int main() {
    //  question similar to balanced brackets
    string s = "(){}[]";
    if(isValid(s))cout<<"True";
    else cout<<"False";
    return 0;
}