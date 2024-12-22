#include<bits/stdc++.h>
using namespace std;
// similar to stack but it is FIFO--> First In First Out
void explainQueue(){
    queue<int>q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}
    q.back() +=5; // add 5 to the last element  of the vector
    cout<<q.back(); // print 9
    cout<<endl;
    // q is {1,2,9}
    cout<<q.front();
    cout<<endl;
    q.pop(); // {2,9} // delete the first element
    cout<<q.front();
    
}


int main(){
    explainQueue();
}
