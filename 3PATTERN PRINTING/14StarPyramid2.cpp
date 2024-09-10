#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of row:";
    cin>>n;
    int nst=1; //num of star
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        // space
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp--;
        // star
        for(int  k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }

}