#include <bits/stdc++.h>
using namespace std;

//  construct the linked list
class Node{
    public:
    int data;
    Node* next;

    //  constructor

    Node(int data1 , Node* next1){ // this is when we give it both address of next node and data of the current

        data = data1;
        next = next1;
    }

    Node(int data1){ // this is when we give only one -> data
        data = data1;
        next = nullptr; // initialize next as null since its the end of the list

    }

};

int main() {
    // Linked list --> linear data structure that can be visualized as a chain with different nodes connected 
    //          unlike array it is dynamic
    //          the "head" is the first node and the tail ils the last node in a linked list

    vector<int>arr = {2,5,6,8};
    Node* head = new Node(arr[0]); // the new keyword is used to dynamically allocate memory to the node with data as arr[0];

    cout<<&arr[0]<<endl;
    cout<<head->data<<"\n"; // accessing the properties of  LL by ->
    cout<<head->next<<endl; // it is pointing to the nullptr
    return 0;
}

//  there is difference between Node and Node*
                    // Node --> refer to the stucture that contains data and the pointer to the next node
                    // Node* --> refer to the Node pointer specifically denotes a pointer  variable that store the address of Node


