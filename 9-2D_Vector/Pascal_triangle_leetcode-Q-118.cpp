#include<iostream>
#include<vector>
using namespace std;
 
    
vector<vector<int>>pascal(int numRows){//
    int m=numRows;
    vector<vector<int>>v;
    for(int i=1;i<=m;i++){
        vector<int>a(i);
        v.push_back(a);
    }

    // Generate
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) v[i][j]=1;
            else v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }

    return v;
    
}
int main(){
     vector<vector<int>>p=pascal(5);

    //  Print 
    for(int i=0;i<p.size();i++){
        for(int j=0;j<=i;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    
}