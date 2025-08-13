#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    queue<int>q;
    Stack(){
        // constructor
    }
    void push(int x){
        int s = q.size();
        q.push(x);
        for(int i = 1; i<=s; i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop(){
         int val = q.front();
         q.pop();
         return val;
    }
    int top(){
        return q.front();
    }
    bool empty(){
        return q.empty();
    }
};


int main() {
    Stack st;
    st.push(3);
    st.push(5);
    st.push(8);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;
}