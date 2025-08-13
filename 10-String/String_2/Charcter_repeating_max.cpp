/* Given a string consisting of lowercase English alphabets. Print the char that is occuring most number of times  */
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){                                                                                                                                 
    // Code 
    int max=0;
    string s ="anurag";
    for(int i=0; i<s.length();i++){
        char ch=s[i];
        int count=1;//Ae loop throughout the string chal raha h to element to ek baar to hoga hi na
        for(int j=i+1; j<s.length();j++){
            if(s[i]==s[j])count++;

        }
        if(max<count) max=count;

    }

    for(int i=0; i<s.length();i++){
        char ch=s[i];
        int count=1; 
        for(int j=i+1; j<s.length();j++){
            if(s[i]==s[j])count++;

        }
        if(max==count) {
            cout<<ch<<": "<<max<<endl;
        }

    }
    
}