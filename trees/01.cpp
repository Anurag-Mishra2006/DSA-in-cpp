#include <bits/stdc++.h>
using namespace std;
/*
node{
    int data;
    node *left;
    node *right;
}
*/
// creation of binary tree;

class node{
    public:
        int data;
        node *left;
        node *right;
    
    node(int data){//constructor
        this->data= data;
        this->left = NULL;
        this->right = NULL;    
    }

};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data; 
    cin>>data;
    root = new node(data);

    if(data == -1)return NULL;

    cout<<"Enter data for inserting in left"<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right"<<endl;
    root->right = buildTree(root->right);

    return root;
}
// 17.00

int main() {
    //  non-linear data structure...
    node *root = NULL;
    root = buildTree(root);
    return 0;
}