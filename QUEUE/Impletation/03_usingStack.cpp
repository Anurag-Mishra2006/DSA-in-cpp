#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    stack<int>s1;
    stack<int>s2;

    void push(int x){
        /*
        s1 -> s2
        x  -> s1
        s2  -> s1;

        */
       while(s1.size()){
        s2.push(s1.top());
        s1.pop();
       }
       s1.push(x);
       while(s2.size()){
        s1.push(s2.top());
        s2.pop();
       }
    }
    int pop(){
        int val = s1.top();
        s1.pop();
        return val;
    }

    int peek(){
        return s1.top();
    }
};
int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    return 0;
}