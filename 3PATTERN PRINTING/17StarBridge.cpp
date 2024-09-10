#include<iostream>
using namespace std;
int main(){
    int n,nsp=1;
    cout<<"No of lines:";
    cin>>n;
   int m=n-1;
//    First line of stars
// 2*n-1 stars
for(int i=1;i<=2*n-1;i++){
    cout<<" * ";
}
cout<<endl;

//    i+j=m+1
// >>>so,j=m+1-i.
 
    for(int i=1;i<=m;i++){
        // stars
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
// SPaces
    for(int k=1;k<=nsp;k++){
        cout<<"  ";
    }
    // increasing nsp
    nsp+=2;
    // Star
        for(int j=1;j<=m+1-i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}


 
    
