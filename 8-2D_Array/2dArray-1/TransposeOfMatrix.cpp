#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number  of row: ";
    cin>>m;
    cout<<"Enter the number of column: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
           
        }

    } 
        for(int i=0;i<m;i++){//rows
        for(int j=0;j<n;j++){//column
            cout<<arr[i][j]<<" ";
           
        }cout<<endl;

    }
    // printing transpose-->Column Wise printing
    for(int j=0;j<n;j++){//column
        for(int i=0;i<m;i++){//row
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

        
    }


}