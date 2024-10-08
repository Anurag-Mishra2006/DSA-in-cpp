#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);//stringstream ko naam bhi dete h here it is ss.
    string temp;

    while(ss>>temp){//ss me se le lo input 
    
        cout<<temp<<endl;
    }

    
}