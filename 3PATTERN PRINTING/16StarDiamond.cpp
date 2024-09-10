// 2n-1 lines print ho raha h
// nsp=n-1;------>nsp--/nsp++
// nst=1------->nst+=2/nst-=2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    int nst=1; 
    //num of star
    int nsp=n-1;
    for(int i=1;i<=2*n-1;i++){
        // space
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        if(i<=n-1) nsp--;
        else nsp++;
        // star
        for(int  k=1;k<=nst;k++){
            cout<<"*";
        }
        if(i<=n-1)nst+=2;
        else nst-=2;
        cout<<endl;
    }

}