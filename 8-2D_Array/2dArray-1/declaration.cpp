// 2D array is array of array
#include<iostream>
using namespace std;
int main(){
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};-->initialize the array explicitly
    int arr[3][3]={1,2,3,4,5,6,7,80,9};//-->Another way of intialize
    // row-->3
    // columns-->3
    // arr[0][0]=4;
    cout<<arr[0][0]<<endl;
    cout<<arr[0][1]<<endl;
    cout<<"printing whole array: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
                
    }
}