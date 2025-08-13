/*
Write a program to rotate the matrix by 90 deg in anti-clockwise
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
    int trans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j]=arr[j][i];
        }
    }
    cout<<endl;
    //  for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //        cout<<trans[i][j];
    //     }
    // }
     for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}