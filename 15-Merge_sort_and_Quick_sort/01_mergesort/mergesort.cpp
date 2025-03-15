#include<iostream>
#include<vector>
using namespace std ;

// merging two sorted array
void merge(vector<int> &a, vector<int>&b, vector<int> & res){
    int i = 0; //a
    int j = 0;//b
    int k = 0;//res
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k++] =a[i++];
        }
        else // b[j] <=a[i]
            res[k++] = b[j++];
    }
    if(i==a.size()){ // a is at end 
        while(j<=b.size()){
            res[k++] = b[j++];
        }
    }
    if(i==b.size()){ // b is at end 
        while(i<=a.size()){
            res[k++] = a[i++];
        }
    }

}

void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1) return ;
    int n1 = n/2;
    int n2 = n - n1;
    vector<int>a(n1);
    vector<int>b(n2);
    //  copy and paste
    for(int i = 0; i<n1; i++){
        a[i] = v[i];
    }
    for(int i = 0; i<n2; i++){
        b[i] = v[i+n];
    }
    // Magic ==> Recursion
    mergeSort(a);
    mergeSort(b);

    // Merge 
    merge(a,b,v);
    a.clear(); // used for the optimisation of space complexity
    b.clear();
}
int main(){
    int arr[]={1,4,5,9};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr , arr+n1); // another way of filling the element in the vector
    
    int brr[] = {2,3,6,7,10,12};
    int n2 = sizeof(brr)/sizeof(brr[0]);
    vector<int>b(brr,brr+n2);
    vector<int>res(n1+n2);
    merge(a,b,res);
    for(int i =0 ; i<res.size() ; i++){
        cout<<res[i]<<" ";
    }
}
 