#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    cout<<a<<endl;
    cout<<a[0]<<endl;
    cout<<&a[0]<<endl;
}
int main(){
    int arr[]={1,4,3,7,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    // Accessing the element in another funtion
    // Updation pass by refrence
    display(arr,size);
    cout<<endl;
    cout<<arr<<endl; // Passing Array to Function BY refrence i.e ham address of array send karte h
    cout<<size;



}