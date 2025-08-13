/*
Write a program to print the element of both the diagonal in a square matrix

*/
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row of matrix : ";
    cin>>m;
    int n;
    cout<<"Enter the column of matrix: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the element of matrix: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if( i == j||i+j==n-1 )cout<<arr[i][j];//if (i == j || i + j == n - 1)
            else cout<<" ";
        }
        cout<<endl;
    }
}