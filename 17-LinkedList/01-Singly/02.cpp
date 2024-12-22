#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1){
        data= data1;
        next = nullptr;
    }


};

Node* convertToLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i =1 ;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;
    
}

void Display(Node* head){
    Node* temp = head;
    while (temp!= NULL)
    {
        cout<<temp->data<<"  ";
        temp= temp->next;
    }
    
}


int main() {
    vector<int>arr={1,4,6,9,0};
    Node * head = new Node(arr[0]);
    Node* mover = head;
    head = convertToLL(arr);
    // cout<<head->next<<"\n"; // pointing the next element
    // cout<<head->next->data<<endl;
    Display(head);
    return 0;
}