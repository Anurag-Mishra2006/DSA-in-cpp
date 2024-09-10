// Passing vectors to Function : Different to array
// >>>> Vectors are passed by values 
// >>>>>Each time you pass, new vector is created 
// Using &(amphersent)We can pass the address of vector



#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>a){
    a[0]=100;
         for(int i=0;i<a.size();i++){
        cout<<a.at(i) << " ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(7);
    v.push_back(9);
    v.push_back(8);
    v.push_back(4);
  
    for(int i=0;i<v.size();i++){
        cout<<v.at(i) << " ";
    }
    cout<<endl;
    change(v);
       for(int i=0;i<v.size();i++){
        cout<<v.at(i) << " ";
    }cout<<endl;
    }
