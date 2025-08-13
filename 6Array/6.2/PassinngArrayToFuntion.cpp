//  array ko pass by reference karte h
#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
     return;
}
void change(int b[]){
    b[0]= 100;
}
int main(){
    int arr[]={1,4,3,7,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    // Accessing the element in another funtion
    // Updation pass by refrence
    display(arr,size);
    change(arr); // Passing Array to Function BY refrence i.e ham address of array send karte h
    display(arr,size);

    



}