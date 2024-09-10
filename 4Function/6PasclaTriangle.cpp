#include<iostream>
using namespace std;
int fac(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        
        f*=i;
    }
    return f;
}
int combination(int n,int r){
   int ncr=fac(n)/(fac(r)*fac(n-r));
}
 
int main(){
    int n,r;
    cout<<"enter n:";
    cin>>n;
    for (int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" " ;
            
        }
        cout<<endl;
    }
    return 0;
}