#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of lines:";
    cin>>n;
    /*1 1 1 1
      1 2 2 2 
      1 2 3 3 
      1 2 3 4 */
    //   max(a,b)--->Jo bada hoga wo dega 

     for(int i=1;i<=2*n-1;i++){
        for(int j= 1;j<=2*n-1;j++){
            int a=i;
            int b=j;
            // Pseudo variable
            if(a>n){a=2*n-i;}
            if(b>n){a=2*n-j;}
            int x=min(a,b);
            cout<<n-x+1;
        }
        cout<<endl;
     } 
 
}