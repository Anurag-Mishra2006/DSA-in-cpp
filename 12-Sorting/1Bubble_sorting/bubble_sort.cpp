 
#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[]={1,2,35,5,6,7,8,94,87,6};
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
     
    // for(int i=0;i<10;i++){//n-1 passes
    // // transverse
    // for(int j=0;j<10;j++){
    //     if(arr[j]>arr[j+1]){
    //         // swap
    //         // int temp=arr[j];
    //         // arr[j]=arr[j+1];
    //         // arr[j+1]=temp;
    //         swap(arr[j],arr[j+1]);

    //     }
    // }
    

    // }
    int n=10;
    for(int i=0;i<n-1;i++){
        bool flag= true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                // Swap 
                swap(arr[j+1],arr[j]);
                flag=false;
               
            }
        }
        if(flag == true)break;
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}