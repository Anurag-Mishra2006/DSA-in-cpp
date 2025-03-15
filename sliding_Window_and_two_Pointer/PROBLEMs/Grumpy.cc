#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>customs = { 9,10,4,5 };
    vector<int>grump =   { 1,0,1,1 };
    int mxloss =0 ;
    int k = 1;
    int loss = 0;
    for(int i =0 ; i<k ; i++){
        if(customs[i] != 0 && grump[i]==1){
            loss += customs[i];
        }
    }
    // cout<<loss<<endl;
    mxloss = loss;
    int maxLossInd = 0 ;
    int start = 1 , last = k;
    while(last<customs.size()){
        cout<<"curr loss : "<<loss<<endl;
        if(customs[last] != 0 && grump[last] == 1){
            loss += customs[last]*grump[last] - customs[start-1]*grump[start-1];
            
        }
        if(mxloss < loss){
            maxLossInd = start;
            mxloss = loss;
        }
        start++;
        last++;
    }
    cout<<mxloss<<endl;
    cout<<maxLossInd<<endl;
    for(int i = maxLossInd ; i< maxLossInd+k;i++){
        if(grump[i]==1)grump[i] = 0;
    }
    for(int i =0 ;i<grump.size() ; i++){
        cout<<grump[i]<<" ";
    }
    return 0;
}