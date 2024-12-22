#include<iostream>
using namespace std;
// in this we are going to check whether the array is sorted or not
bool isSorted(int *arr , int size){
    // base case 
    if(size==0 || size==1)return true;
    if(arr[0]>arr[1])return false;
    else {
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}
int main(){
    int arr[]= {1,2,3,6,8,9};
    int size= 6;
    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"Array is sorted";
    }
    else "Array is not sorted";
}