#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void sort01(vector<int>&v){
    int n=v.size();
    int noo=0;
    int noz=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)noz++;
        else noo++;


        // Filling element 
        for(int i=0;i<n;i++){
            if(i<noz)v[i]=0;
            else v[i]=1;
        }
    }
}

using namespace std;
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

// method 1 --> Two Pass Method
// >>>> int noz=0;1;2;3;4
// >>>> int noo=0;1;2;3;4
// >>> 0 --> (noz-1)th indecies tak 0
// (noz)th -->1
sort01(v);
// Kaam
for(int i=0;i<v.size();i++){
    cout<<v[i]<<"  ";
}
cout<<endl;


}