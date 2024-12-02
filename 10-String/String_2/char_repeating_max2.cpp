/* Given a string consisting of lowercase English alphabets. Print the char that is occuring most number of times  */
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
int main(){                                                                                                                                 
        //code
        string s= "leetcode";

        // Not a good way 

        // int max =0;
        // for(int i=0;i<s.length();i++){
        //         char ch = s[i];
        //         int count =1;
        //         for(int j= i+1;j<s.length();j++){
        //                 if(s[j]==s[i])count++;
        //         }
        //         if(max < count)max = count ;
        // }

        //  for(int i=0;i<s.length();i++){
        //         char ch = s[i];
        //         int count =1;
        //         for(int j= i+1;j<s.length();j++){
        //                 if(s[j]==s[i])count++;
        //         }
        //         if(max == count) {
        //                 cout<<ch<<" "<<max;
        //         }
        // } 
       vector<char>arr(26,0); //26 is liye kyu ki all alphabet is in lowercase
        for(int i =0;i<s.length();i++){
                char ch = s[i];
                int ascii = (int)ch;
                arr[ascii- 97]++;
        }
        int mx =0 ;
        for(int i = 0;i<26;i++){
                if(arr[i]>mx) mx = arr[i];
        }
        for(int i = 0;i<26;i++){
                if(arr[i]==mx){
                        int ascii = i + 97;
                        char ch = (char)ascii;
                        cout<<ch<<" "<<mx;
                }
        }
    
}