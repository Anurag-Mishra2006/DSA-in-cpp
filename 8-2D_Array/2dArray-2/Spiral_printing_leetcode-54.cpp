/*LEETCODE-54
write a program to print the matrix in spiral form
*/
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of row  of matrix: ";
    cin>>m;
    int n;
    cout<<"Enter the number of column of matrix: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    /*
    right
    down
    left
    up
    */
   int minr=0,minc=0,maxr=m-1,maxc=n-1;
//    right
    while(minr<=maxr&&minc<=maxc){
        for(int i=minc;i<=maxc;i++){
        cout<<arr[minr][i]<<" ";
    }
        minr++;

        // down
        if(minr>maxr||minc>maxc)break;//condition
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        // Left 
        if(minr>maxr||minc>maxc)break;//condition
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<< " ";
        }
        maxr--;

        // Up
        if(minr>maxr||minc>maxc)break;//condition
        for(int i=maxr;i>=minr;i--){
            cout << arr[i][minc] << " ";
        }
        minc++;
    }
}