#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;
    int nfac=1;
    for (int i=2;i<=n;i++){
        nfac*=i;
    }
    // cout<<nfac;


     int rfac=1;
    for (int i=2;i<=r;i++){
        rfac*=i;
    }
    // cout<<rfac;


    int nrfac=1;//(n-r)!
    for(int i=2;i<=n-r;i++){
        nrfac*=i;

    }

    int ncr=nfac/(rfac*nrfac);

     cout<<ncr;
    
}