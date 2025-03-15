#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout<<"size of the array is "<< n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}
bool linearSearch(int arr[],int size,int key){
    print(arr,size);
    // base case
    if(size==0 ){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else {
        bool remainingPart = linearSearch(arr+1,size-1,key);
        return remainingPart;
    }


}
int main(){
    int arr[] = {3,4,6,8,2};
    int size = 5;
    int key = 2;
    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"Element is present";
    }
    else cout<<"Element is absent";
    return 0;
}