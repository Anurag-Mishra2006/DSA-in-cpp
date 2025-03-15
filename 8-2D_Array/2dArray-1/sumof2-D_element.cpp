#include<iostream>
using namespace std;
int main(){
     int m,n;
    cout<<"Enter the no. of row : ";
    cin>>m;
    cout<<"Enter the no. of column : ";
    cin>>n;
    // define the array
    int arr[m][n];
    int sum=0;
    // Taking input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        // for(int k=0;k<n;k++){
        //     sum+=arr[i][j];
        // }
    }
    cout<<"sum : "<<sum;
}