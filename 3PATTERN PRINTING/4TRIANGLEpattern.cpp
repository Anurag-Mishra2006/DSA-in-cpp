#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 for(int i =1;i<=n-1;i++){
      for(int j=n-i;j>0;j--){
       cout<<" ";
      }
        for(int j=1;j<=2*i-1;j++){
          cout<<"*";
      }cout<<endl;
      }
       for(int k=1;k<=2*n-1;k++)cout<<"*";
    }
     
    
