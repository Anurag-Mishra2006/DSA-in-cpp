// displaying queue in reverse order
#include <bits/stdc++.h>
using namespace std;

void displayQueue(queue<int> &q){
    int n =q.size();
    for(int i =0; i<n;i++){
        int temp = q.front();
        cout<<q.front()<<" ";
        q.pop();
        q.push(temp);
    }
    cout<<endl;
}

void displayReverse(queue<int>s){
    // reverse the queue using a stack
    stack<int>st;
    int n = s.size();
    //  emptying the whole queue in stack
    for(int i = 0; i<n ;i++){
        st.push(s.front());
        s.pop();
    }
    // refilling the queue again
    n= st.size();
    while(n--){
        s.push(st.top());
        st.pop();
    }
    displayQueue(s);
}

int main() {
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    displayQueue(q);
    displayReverse(q);
    return 0;
}