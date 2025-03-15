#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str="12345";
    // To convert this string into integer  we use stoi
    int x=stoi(str);
    cout<<x<<endl;//12345
    cout<<x+1;//12346     //by this + the last element get  add with 1
    cout<<endl;

    // we use to convert the int to string we use to_string
    int a=12356;
    string s=to_string(a);
    cout<<s;
cout<<endl;
    // To convert the string into long long datatype we use stol
    string p="11234343567878890";
    long long y=stoll(p);
    cout<<y<<endl;

    
}