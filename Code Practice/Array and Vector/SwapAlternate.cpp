#include<iostream>
using namespace std;

// Printing the array
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int size){
       // Alternate Swaping
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
 }
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
    swapAlternate(arr,n);
    printArray(arr,n); 


 }
 