// stack is LIFO -> Last In First Out
#include<bits/stdc++.h>
using namespace std;
// in stack there is only three function push , pop , top 
//  in stack indexing is not allowed
void explainStack(){
    stack<int>st;
    st.push(1);
    st.push(5);
    st.push(7);
    st.push(3); // {3,7,5,1}
    st.emplace(5); // {5 , 3,7,5,1}
    cout<<st.top()<<endl; 
    st.pop(); // 5 is removed
    cout<<st.top()<<endl; // now 3 is on the top as 5 is removed 
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl; // false -> 0
    stack<int> st1 , st2;
    st1.swap(st2);
}
int main(){
    explainStack();
}