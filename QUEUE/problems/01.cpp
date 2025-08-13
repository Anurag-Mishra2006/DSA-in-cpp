#include <bits/stdc++.h>
using namespace std;

class MyStack {
    public:
        queue<int> q;
        
        MyStack() {}

        void push(int x) {
            q.push(x); 
            int size = q.size();
            while (size  > 1) {
                q.push(q.front());
                q.pop();
                size--;
            }
        }
        
        int pop() {
            if (q.empty()) return -1;
            int val = q.front();
            q.pop();
            return val;
        }
        
        int top() {
            return q.empty() ? -1 : q.front();
        }
        
        bool empty() {
            return q.empty();
        }
};
    
int main() {
    MyStack stack;
    stack.push(9);
    stack.push(5);
    cout << stack.top() << endl; // Should output 5
    cout << stack.pop() << endl; // Should output 5
    cout << stack.top() << endl; // Should output 9
    return 0;
}
