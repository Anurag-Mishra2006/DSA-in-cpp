#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: \n";
    cin>>n;
    int fac=1;
    cout<<"FACTORIAL OF "<<n<<" is: ";
    while(n>0){
        fac=fac*n;
        n=n-1;
        // cout<<n <<"\t";
        // cout<<fac<<endl;

    }
cout<<fac;
}