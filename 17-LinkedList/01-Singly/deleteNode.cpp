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

 Node* deleteHead(Node* head){
        if(head == nullptr)return nullptr;
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* deleteTail(Node* head){
    if(head == nullptr || head->next == nullptr)return nullptr;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    
    Node* last = temp->next;
    temp->next = nullptr;
    delete last;
    return head;

}

Node* deleteAtK(int k, Node* head){
     if(k == 1){
        // removing head
        Node* temp = head;
        head= head->next;
        delete temp;

     }
     else{
        int cnt = 0;
        Node* temp = head;
        Node* prev = nullptr;

        while(temp != nullptr){
            cnt++;

            if(cnt == k){
                prev->next = temp->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    return head;

}

int main() {
    vector<int>arr =  {1,2,3,4,5,6,7,8};
    Node* head = convertToLL(arr);
    head = deleteHead(head);
    cout<<head->data<<endl; // deleting the head
    // delete last node
    cout<<"Delete the last Node "<<endl;
    Node* deletelast = convertToLL(arr);
    deletelast = deleteTail(deletelast);
    print(deletelast);
    cout<<endl;
    Node* deleteK = convertToLL(arr);
    deleteK = deleteAtK(3,deleteK);
    print(deleteK);

    return 0;
}