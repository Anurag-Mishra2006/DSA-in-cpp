// the total time complexity of a program is eqaul to the summation of all the running time of disconnect fragment
// simply we calculate time complexity by the total number of time the operation  run 
// for ex: if loop ke andar loop ho and dono connected ho to uska time complexity O(n^2)aayega 
// time complexity ka hardware se koi lena dena nhi hota --> Time Complexity can only be calculated on the same programming device
// Space complexity is the amount of spaces requires by the program


// Given an array of size n+1 consisting of integer from 1 to n.  One of the element is duplicate in the array. Find that duplicate element
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={6,3,2,4,2,7,1,5};
    // // 1.Brute Force.

    // bool flag=false;
    // for(int i=0;i<7;i++ ){
    //     for(int j=i+1;j<8;j++){
    //         if(arr[i]==arr[j]){
    //             cout<<arr[i];
    //             flag=false;
    //             break;
    //         }
    //     }
    //     if(flag==true)break;
    // }
    // // Time complexity: O(n2) || Space Complexity: O(1)
    // // We cautious for it






    // // 2.Making a new array containing intially 0
    // vector<int>check(8,0);//Good method and it save time

    // // iske ham kya karenge chuki hamare element 1 se n tak hi h and total element =n+1 : kahne ka matalb ae h ki 6 element ke corresponding hamara index bhi h
    // // to given ke 0th element=6 to now ham 6th element of  check me ja kar 0 ko 1 kar denge
    // //  and jab duplicate number aayega to uske corresponding 1 pahle se hoga check arr me to we get the duplicate n0

    // for(int i=0;i<check.size();i++){
    //     int idx=arr[i];
    //     if(check[idx]==0){
    //         check[idx]=1;

    //     }
    //     else cout<<arr[i];

    // }
    // Time complexity: O(n) || Space Complexity: O(n)






    // 3.Solving this question using maths 
    // we are using formula of sum of ap= n*(n-1)/2
    int sum=0,n=8;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=n*(n-1)/2;
    int dupli=sum-s;
    cout<<dupli;
    // Time complexity: O(n) || Space Complexity: O(1) **BEST in all three

}