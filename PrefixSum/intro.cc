#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v = {1,4,5,3,2,7,6};
    vector<int>pre;
    int sum =0 ;
    for(int i = 0 ; i< v.size() ; i++){
        sum +=  v[i];
        pre.push_back(sum);
    }
    for(int  i =0 ; i< pre.size() ; i++){
        cout<<pre[i]<<" ";
    }
    return 0;
}