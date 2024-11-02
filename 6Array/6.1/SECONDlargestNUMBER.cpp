// Step1= Find largest element
// Step2=Traver through the arr ,if secondmax<arr[i]&&arr[i]!=max
// int max=INT_MIN;
// int smax=INT_MIN
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of arrays : ";
    cin>>n;
    int arr[n];
    // Input
    for(int i=0; i<=n-1;i++){
        cin>>arr[i];
    }
    // int max=arr[0]
    int max=arr[0];
    for(int i=1;i<=n-1;i++){
        if(max<arr[i])max=arr[i];

    }
    // Second Maximum
    int smax=arr[0];//can also smax=INT_MIN
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max&& smax<arr[i]) smax=arr[i];
    }
    cout<<max<<endl;
    cout<<smax;
}
