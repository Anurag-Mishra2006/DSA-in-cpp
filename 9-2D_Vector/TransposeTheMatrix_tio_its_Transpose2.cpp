/*
You are given a matrix/2D-array of size(n*n)
Change this matrix into its transpose
*/


#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of rows/column: ";
    cin>>m;
    
    int arr[m][m];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    // Print the matrix 
     
     
    for(int i=0;i<=m-1;i++){//rows
        for(int j=0;j<=m-1;j++){//col
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    // // Store the transpose
    // int n=m;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j];
    //     }
    // }


    // transpose in the same matrix;
    for(int i=0;i<m;i++){//rows
    // see int j carefully its changed
        for(int j=i+1;j<m;j++){//col **here is the change 
            // sWAPPING OF i,j and j,i 
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
        }
    }
        

            // Print The Transpose
    for(int i=0;i<m;i++){//rows
        for(int j=0;j<m;j++){//column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     
    
}