#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int>st;
    stack<int>gt;
    stack<int>vt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    while (gt.size()>0)
    {
        vt.push(gt.top());
        gt.pop();
    }
    while(vt.size()>0){
        cout<<vt.top()<<" ";
        vt.pop();
    }
    
    return 0;
}