#include<iostream>
using namespace std;
int main(){
    // String is array of char
    // whatever in single inverted commas is treated as char
    char str[]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        cout<<str[i]<<" ";
        
    }
    cout<<endl;
    // Whatever is in the " " is known as string 
    char str1[7]="Anurag";
    for(int i=0;i<7;i++){
        cout<<str1[i]<<" ";
        
    }

    cout<<endl; 

    // char is always end with special char called null char '\0';
    char ch='\0';
    cout<<int(ch);

    cout<<endl<<"We can print all element without knowing the size of string >>"<<endl;
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    // Special thing of string is that we can directly call the string without any loop
    cout<<endl<<"Without any loop: "<<endl;
    cout<<str1;
    

}