#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter size of array  ";
    cin>>n;
    int arr[n];
    // Input 
    for(int i=0;i<=n-1;i++){
        cin>>n;
    }
    for(int i=0;i<=n-1;i++ ){
        sum=sum+arr[i];
    }

    cout<<sum;




    
    
}