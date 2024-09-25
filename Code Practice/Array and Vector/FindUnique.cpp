#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];//XOR 
    }
    return ans;
}
int main(){
    int n;
    
    cout<<"Number of element you want in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element: ";
    // Input of array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findUnique(arr,n);

}