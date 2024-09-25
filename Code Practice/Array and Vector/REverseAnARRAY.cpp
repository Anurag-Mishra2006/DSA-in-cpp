#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of  array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element : ";
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    for(int j=n-1;j>=0;j--){
        cout<<arr[j]<<" ";
    } 
}