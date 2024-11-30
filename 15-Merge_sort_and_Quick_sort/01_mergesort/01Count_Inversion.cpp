#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr , arr+n1); // another way of filling the element in the vector
   for(int i = 0; i<a.size(); i++){
        cout<<a[i]<<" ";

   }
   cout<<endl;
   int count = 0;
   for(int i = 0;i<n1;i++){
        for(int j = i+1;j<n1;j++){
            if(a[i]>a[j])count++;
        }
   }
   cout<<count;
}
 