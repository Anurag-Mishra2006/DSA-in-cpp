#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    
    vector<int> temp;
    
    // Pop all elements from stack and store in a vector
    while (!st.empty()) {
        temp.push_back(st.top());
        st.pop();
    }

    // Push elements back into stack in reversed order
    for (int i = 0; i < temp.size(); i++) {
        st.push(temp[i]);
    }

    // Print reversed stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
