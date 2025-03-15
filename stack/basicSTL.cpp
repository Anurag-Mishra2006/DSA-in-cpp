#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int>st;
    st.push(5);
    st.push(6);    
    st.push(7);    
    st.push(8);    
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    return 0;
}