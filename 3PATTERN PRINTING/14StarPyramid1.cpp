#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of row:";
    cin>>n;
    for(int i=1;i<=n;i++){
        // Space 
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
         
        for(int j=1;j<=2*i-1;j++){
            cout<<" * ";
        }
    
        cout<<endl;

    }
}