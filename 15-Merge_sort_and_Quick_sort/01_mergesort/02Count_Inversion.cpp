#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int c  =0; //global variable (can access in any function)
// Inversion function
int inversion(vector<int> &a,vector<int> &b){
    int count =0;
    int i =0 ;
    int j =0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) {
            c  += (a.size()- i);
            j++;
            }
        else // a[i] <=b[j]
            i++;
   
    }
    return count;
}
// merging two sorted array
void merge(vector<int> &a, vector<int>&b, vector<int> & res){
    int i = 0; //a
    int j = 0;//b
    int k = 0;//res
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++] =a[i++];
        }
        else // b[j] <=a[i]
            res[k++] = b[j++];
    }
    if(i==a.size()){ // a is at end 
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(i==b.size()){ // b is at end 
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }

}

void mergeSort(vector<int>&v){
    int count =0 ;
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
        b[i] = v[i+n1];
    }
    // Magic ==> Recursion
    mergeSort(a);
    mergeSort(b);
    // we will count the inversion of the two sorted array
    c  +=inversion(a,b);
    // Merge 
    merge(a,b,v);
    a.clear(); // used for the optimisation of space complexity
    b.clear();
}
int main(){
    int arr[]={5,1,3,0,4,2,6};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int>a(arr , arr+n1); // another way of filling the element in the vector
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl; 
    mergeSort(a);
    cout<<c ;// ek kam aa raha h 
    // Why?
}
   