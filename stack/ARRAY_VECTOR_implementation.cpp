#include <bits/stdc++.h>
using namespace std;
class Stack{
    //  user defined data structures
public:
    int arr[5];
    // in place of arr we can also use vector
    
    int idx = -1;
    void push(int val){
        if(idx==4){
            cout<<"Stack is full ";
            return ;
        }
        idx++;
        arr[idx]= val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty! ";
            return;
        }
        idx--;
    }
    int top(){
        if(idx == -1){
            cout<<"Stack is empty";
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main() {
    Stack st;
    st.push(4);
    st.push(5);
    st.push(5);
    st.push(5);
    st.push(5);
    st.push(5);
    cout<<endl;
    cout<<st.top()<<endl;
    cout<<"size: "<<st.size()<<endl;
   
    return 0;
}