
#include <bits/stdc++.h>
using namespace std;

void displayRec(stack<int>&s){
    if(s.size()==0)return ;
    int x = s.top();
    s.pop();
    displayRec(s); 
    cout<<x<<" ";
    s.push(x);
}
void pushAtBottom_Rec(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom_Rec(st,val);
    st.push(x);
}

void reverse(stack<int>&st){
    if(st.size()==1)return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottom_Rec(st,x);
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
    pushAtBottom_Rec(st,-10);
    cout<<endl;
    displayRec(st);
    reverse(st);
    cout<<endl;
    displayRec(st);
    return 0;
}