
//  >>** Passing of 2D Array into function-->Pass by refrence-->
// but 2D me hota Problem : Bina size ke nahi kar payenge
#include<iostream>
#include<vector>
using namespace std;
void Change(int a[]){
    a[0]=9;

}

void change2D(int arr[3][3]){//Row and column number have to given otherwise it throw
    arr[0][0]=100;

}
int  main(){
    int a[3]={1,2,3};
    Change(a);
    cout<<a[0]<<endl;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    change2D(arr);
    cout<<arr[0][0]<<endl;

}