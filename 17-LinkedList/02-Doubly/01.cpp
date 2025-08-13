#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    public :

        Node(int val, Node* next1, Node* prev1){
            data = val;
            next = next1;
            prev = prev1;
        }
        Node(int val){
            data = val;
            prev = nullptr;
            next = nullptr;
        }
};

Node* convertToDLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}

void print(Node* head){
    while(head != nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* deleteHead(Node* head){
    if(head == nullptr)return head;
    if(head->next == nullptr)return nullptr;

    Node* temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

Node* deleteLast(Node* head){ 
    if(head->next == nullptr)return nullptr;
    if(head == nullptr)return head;

    Node* temp = head;

    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newTail = temp->prev;
    newTail->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
 
}

Node* deleteAtK(int k, Node* head){

    if (head == nullptr || k <= 0) return head;

    if(k == 1){
        Node* temp = head;
        head = head->next;
        if(head != nullptr)
            head->prev = nullptr;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node* temp = head;
    Node* back = nullptr;
    while(temp != nullptr){
        cnt++;

        if(cnt == k){
            if (back != nullptr) {
                back->next = temp->next;
            }
            if (temp->next != nullptr) {
                temp->next->prev = back;
            }
            delete temp;
            break;
        }
        back = temp;
        temp = temp->next;
    }
    
    return head;
}

int main() {
    vector<int>arr={1,4,6,9,0};
    Node* head = convertToDLL(arr);
    head = deleteHead(head);
    print(head);
    head = convertToDLL(arr);
    cout<<endl;
    head = deleteLast(head);
    print(head);
    head = convertToDLL(arr);
    cout<<endl;
    deleteAtK(5, head);
    print(head);
    return 0;
}