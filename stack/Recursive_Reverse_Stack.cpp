//  Display a stack using recursion 
//  and restoring it again in the stack

#include <bits/stdc++.h>
using namespace std;

void displayRec(stack<int>s){
    if(s.size()==0)return ;
    int x = s.top();
    cout<<x<<" ";
    s.pop();
    displayRec(s); 
         
    cout<<x<<" ";
    s.push(x);
}

int main() {
    stack<int>st;
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);
    st.push(100);
    displayRec(st);
    return 0;
}