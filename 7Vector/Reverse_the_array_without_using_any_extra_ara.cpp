#include<iostream>
using namespace std;
int main(){
    int arr[]={6,1,4,3,4,2,3,1};
    int n= sizeof(arr)/4;
    int i=0,j=n-1;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    while(i<j){
        int temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
