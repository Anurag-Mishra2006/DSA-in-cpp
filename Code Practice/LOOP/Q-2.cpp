#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i =1;i<=n-1;i++){
        for(int j=n-i;j>0;j--){
        cout<<" ";
      }
        for(int j=1;j<=2*i-1;j++){
          cout<<"*";
      }cout<<endl;
      }
       for(int k=1;k<=2*n-1;k++){
        cout<<"*";}
        cout<<endl;
           for(int i=0;i<n;i++) {
        // space
        for(int  j=0;j<i;j++){
            cout<<" ";
    }
    // Stars ---->2n-(2i+1)
    for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
    }

       // space
    for(int  j=0;j<i;j++){
        cout<<" ";
    }
    cout<<endl;
   }
}