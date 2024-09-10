#include<iostream>
using namespace std;
int main(){
    int n,nsp=1;
    cout<<"No of lines:";
    cin>>n;
   int m=n-1;

    for(int i=1;i<=m;i++){
        int a=1;
        // stars
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
// SPaces
    for(int k=1;k<=nsp;k++){
        cout<<"  ";
        a++;
    }
    // increasing nsp
    nsp+=2;
    // Number
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
    cout<<endl;
    }
}