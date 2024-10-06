/*Input a string of even length and reverse the first half of the string */
// algo reverse from 0 to n/2;
#include<iostream>
#include<string>
#include<algorithm>//for reverse add this header
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // REverse first half
    int length=s.length();
    reverse(s.begin(),s.begin()+length/2);
    cout<<s;

  
}