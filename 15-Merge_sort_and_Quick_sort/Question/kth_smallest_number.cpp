#include<iostream>
using namespace std;
int  Partition(int arr[],int si,int ei){
    int pivotElemet = arr[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2)continue;
        if(arr[i]<=pivotElemet)count;
    }
    int pivotIdx=count+si;
    swap(arr[(si + ei)/2],arr[pivotIdx]);
    int i =si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElemet)i++;
        if(arr[j]>pivotElemet)j--;
        else if(arr[i]>pivotElemet && arr[j]<=pivotElemet){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void kthSmallest(int arr[] , int si, int ei ,int k){
    int pi = Partition(arr,si,ei);
    if(pi +1 ==k) cout<< arr[pi];
    else if(pi +1 <k) return kthSmallest(arr,pi+1,ei,k);
    else return kthSmallest(arr,si , pi -1,k);

}
int main(){
    int arr[ ]= {5,1,8,2,7,-8,4,3};
    int n =sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    int k = 4 ;
    kthSmallest(arr, 0,n-1,k);
}