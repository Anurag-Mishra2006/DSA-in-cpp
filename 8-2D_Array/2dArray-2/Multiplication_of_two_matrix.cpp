#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Multiplication occur as row*column
    int m;
    cout<<"Enter the number of row in 1st matrix: ";
    cin>>m;
    int n;
    cout<<"Enter the number of column in 1st matrix: ";
    cin>>n;
    int p;
    cout<<"Enter the number of row in 2st matrix: ";
    cin>>p;
    int q;
    cout<<"Enter the number of column in 2st matrix: ";
    cin>>q;
    if(n==p){
        cout<<"Enter the element of 1st matrix: ";
        // Taking input of matrix:
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the element of 2nd matrix; ";
    // Taking input of matrix:
    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
    }
    // Resultant matrix
    int result[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
             result[i][j]=0;
           for(int k=0;k<p;k++){
            result[i][j]+=arr[i][k]*brr[k][j];
            
           }
           
        }
        
    }

    
    // Print 
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }



    }

    else{//n!=p
        cout<<"Multiplication of your matrix is not possible.";
    }
}