#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    // Input
    for(int i=0;i<=n-1;i++){
        cin>>n;
    }
    int x;
    cin>>x;
    // Search
    // Check mark
    bool flag=false;//false means not present
    for(int i=0;i<=n-1;i++ ){

        if(arr[i]==x) flag=true;
    }
    if(flag=true)
cout<<"Element found";
else cout<<"404 ERROR elemnt not found";
}