#include <bits/stdc++.h>
using namespace std;

int main() {
    //  now here we are going to print the stack from bottom to top
    stack<int>st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    int n = st.size();
    //  emptying the stack-->required an extra space to store the pop value
    stack<int>temp;
    for(int i = 0; i<n; i++){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;  
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    return 0;
}