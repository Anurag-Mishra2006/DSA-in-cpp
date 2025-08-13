#include<iostream>
#include<vector> 
#include<climits>

using namespace std;
void printmax(int arr[],int n,int idx, int max){
    if(idx==n){ // base case
        cout<<max;
        return;
    }
    if(max<arr[idx])max = arr[idx];
    printmax(arr,n,idx+1,max);

}

// storing the max value
int maxInArray(int arr[],int n,int idx){
    if(idx == n)return INT_MIN; // INT_MIN is liye yaha return kar rahe h kyuki jab last call hoga to return minimum value hoga 
    //  if we return greater value than maximum value in the array it give that element as output

    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main(){
    int arr[]={2,3,100,4,6,7,9,41,6};
    int n= sizeof(arr)/4;
    // printmax(arr,n,0,INT_MIN);
    cout<<maxInArray(arr,n,0);
     
}