#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
    int idx = -1;
    int start =0;
    int arr[10];
    void push(int val){
        if(idx == 9){
            cout<< "Queue overflow";
            return;
        }
        idx++;
        arr[idx]=val; 
    }
    void pop(){
        
        if(idx == -1){
            cout <<"Queue underflow";
            return;
        }
        start++;
        idx--;
    }
    int top(){
        return arr[start];
    }

};

int main(){
    Queue queue;
    queue.push(5);
    queue.push(6);
    queue.push(5);
    queue.push(6);
    queue.push(5);
    queue.push(6);
    queue.push(5);
    queue.push(6);
    queue.push(5);
    queue.push(6);
    cout<<queue.top()<<endl;
    queue.pop();
    cout<<queue.top()<<endl;

    
    cout<<endl;
    return 0;
}