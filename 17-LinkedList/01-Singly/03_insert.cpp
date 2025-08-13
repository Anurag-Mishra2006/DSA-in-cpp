#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
    Node(int val, Node* address){
        data = val;
        next = address;
    }
    
   
};
Node* convertToLL(vector<int>arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;

        for(int i = 1; i < arr.size();i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = mover->next;
        }
        return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

Node* insertAtHead(int val, Node*head){
    Node* temp  = new Node(val);
    temp->next = head;
    head = temp; // or simply return temp or do this
    return head; 
}

Node* insertAtLast(int val, Node* head){
    if(head == nullptr){
        Node* temp = new Node(val);
        return  temp;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* node = new Node(val);
    temp->next = node;
    return head;
}

Node* insertAtK(int k, int val, Node* head){

    if(head == nullptr){
        if(k == 1){
        Node* temp = new Node(val, head);
        return temp;
        }
        else return nullptr; 
    }
    if(k == 1){
        Node* temp = new Node(val, head);
        temp->next = head;
        return temp;
    }

    int cnt = 0;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        cnt++;
        if(cnt == k-1){
            Node* node = new Node(val);
            node->next = temp->next;
            temp->next = node;
            return head;
            

        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


int main() {
    vector<int>arr =  {1,2,3,4,5,6,7,8};
    Node* head = convertToLL(arr);
    head = insertAtHead(56,head);
    head = insertAtLast(89, head);
    head = insertAtK(3,45,head);
    print(head);
    return 0;
}