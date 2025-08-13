#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Anurag Mishra";
    cout<<str;cout<<endl;
    // We can also do indexing
    cout<<str[0];
    cout<<endl;
    
    // Taking input of string
    // 1.we use cin but it give when we want to add space between the space   
    
    // string str3;
    // cin>>str3;
    // cout<<str3;    //once you hit enter or space it  seperated and end and it give the part before the space or enter.


    //2.  To tackle this we use getline
    string s;
    // system("cls"); // This will clear the screen 
    getline(cin,s);
    cout<<s;
}