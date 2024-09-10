#include<iostream>
using namespace std;
int fac(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int permutation(int n , int r){
    int npr=fac(n)/(fac(r));
    return npr;
}
int main(){
    int n,r;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;

    int nfac=fac(n);
    int rfac=fac(r);
    int nrfac=fac(n-r);
    int ncr=nfac/(rfac*nrfac ) ;
    int npr=permutation(n,r);
    cout<<ncr;
    cout<<"\nPermutation ";
    cout<<npr<<endl;
     

     

}