#include<iostream>
using namespace std;
int main(){
    int inis=0,n=5;
    for(int i=0;i<n;i++){
        // Stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        // Spaces
        for(int j=0;j<inis;j++){
            cout<<" ";
        }

        // Stars
          for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        inis+=2;
        cout<<endl;

    }
    inis=8;
    for(int i=1;i<=n ; i++){
          // Stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        // Spaces
        for(int j=0;j<inis;j++){
            cout<<" ";
        }

        // Stars
          for(int j=1;j<=i;j++){
            cout<<"*";
        }
        inis-=2;
        cout<<endl;

    }

 
}