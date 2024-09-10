#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter your problem: ";
    cin>>a>>op>>b;
    // if (op=='+')cout<<a+b;
    // if (op=='-')cout<<a-b;
    // if (op=='*')cout<<a*b;
    // if (op=='/')cout<<a/b;
    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;

        case '/':
            cout<<a+b;
            break;
        
    }
    
    



}