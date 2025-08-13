#include<iostream>
#include<vector>
using namespace std;

// Algorithm---->
/*
step1=reversePart(0,n-k-1,v); int n=v.size()
reversepart(n-k,n-1,v);
reversePart(0,n-1,v);

*/
 
void display(vector<int>&a){
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>&v){
   
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;

}


 

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
     v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    display(v);
    int k=2;
     int n=v.size();
    if(k>n)k=k%n;


    // Rotate 
    // reversePart(0,n-1,v);//2  3  4  7  1  6  
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);//4  7  1  6  2  3
    
    display(v);


    

}