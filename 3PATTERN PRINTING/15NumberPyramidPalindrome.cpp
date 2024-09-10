#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of row:";
    cin>>n;
   for(int i=1;i<=n;i++){
    // for loop of Space
    for(int k=1;k<=n-i;k++){
        cout<<" ";
    }
    // for loop of  number
    for(int j=1;j<=i;j++){
        cout<<j;

    }

    // for loop of reverse of numbers
    for(int q= i-1;q>=1;q--){
        cout<<q;

    }
    
    cout<<endl;
   }


}