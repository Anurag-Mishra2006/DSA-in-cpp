// Yadi hamko size of array nhi pata ho to we use size and sizeof operator

#include<iostream>
using namespace std;
int main(){
//     int arr[]={2,6,6,5,1,1,5,9,56,5,8,86,5,2,4};
// int n=sizeof(arr)/sizeof(arr[0]);

// cout<<n;
 

//  MEMORY ALLOCATION IN ARRAYS      //
int arr[5];
// Observer the address 
cout<<&arr[0]<<endl; //0x61fefc
cout<<&arr[1]<<endl; //0x61ff00
cout<<&arr[2]<<endl; //0x61ff04
cout<<&arr[3]<<endl;//0x61ff08
cout<<&arr[4]<<endl; //0x61ff0c
// *****Kissi bhi array ka  address uske first element ki first bit ka address hota h












}