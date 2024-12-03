#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
 string str="the sky is blue";
 stringstream ss(str);  // stringstream 'ss' me str ko store kara rahe h 

 vector<string>v;
 string temp;
 while(ss>>temp){
    v.push_back(temp);
 }

// //  Vector print
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<< endl;

    // Sorting 
   //   Jo sorting hoga wo ascii value ke according hota h
   //  captail letter se start hone wale pahle and then lower case me according to ascii value
    string ans = "";
    reverse(v.begin(),v.end());// sorting se same word saath aa gye 
     for(int i=0; i<v.size();i++){
        ans += v[i];
        ans += " ";
    }
    cout<< ans;
     
      
 
}