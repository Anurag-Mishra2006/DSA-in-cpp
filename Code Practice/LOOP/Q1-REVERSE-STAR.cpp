//  Print the patterrn

// *****
//  ***
//   *
#include<iostream>
using namespace std;
int main(){
    int n=4;
   for(int i=0;i<n;i++) {
    // space
    for(int  j=0;j<i;j++){
        cout<<"  ";
    }
    // Stars ---->2n-(2i+1)
    for(int j=0;j<2*n-(2*i+1);j++){
        cout<<" *";
    }

       // space
    for(int  j=0;j<i;j++){
        cout<<" ";
    }
    cout<<endl;
   }


}
