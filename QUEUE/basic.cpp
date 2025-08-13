//  follow FIFO
// push from back and pop from front
#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int>q;
    // push --> insertion happens only at the back/rear O(1)
    // pop --> only happens at front
    // front --> can access the front of the queue
    // size --> return the size of queue
    // back --> we can also access the rear element 
    // empty() --> return true when then size of the queue is equal to 0 else return false
    
    q.push(10);   
    q.push(20);   
    q.push(30);   
    q.push(40);   
    q.push(50);  
    cout<<"Size: "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    //  10 pop 
    cout<<"Size: "<<q.size()<<endl;
    cout<< q.front();
    return 0;
}