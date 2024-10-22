/*Given a sentence str , return the word that is occuring most number of time in that sentence */
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
 string str="raghav is a math teacher. math He is a DSA math mentor also.";
 stringstream ss(str);
 vector<string>v;
 string temp;
 while(ss>>temp){
    v.push_back(temp);
 }

// //  VEctor print
//     for(int i=0; i<v.size();i++){
//         cout<<v[i]<<endl;
//     }


    // Sorting 
    sort(v.begin(),v.end());

     int maxcount=1;
     int count=1;
     for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1])count++;
        else count =1;
        maxcount=max(maxcount,count);
     }

      count=1;
     for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count =1;
        if(count==maxcount)cout<<v[i]<<" - "<<maxcount<<endl;
     }
      
 
}