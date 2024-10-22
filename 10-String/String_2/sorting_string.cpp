#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    // cin>>s;
    getline(cin,s);//This will include space as a character 
     sort(s.begin(),s.end());//this sorting is according the ascii value  (the ascii value of char is less than the alphabet)
     
        cout<<s;
    
}