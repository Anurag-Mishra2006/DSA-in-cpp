#include<iostream>
#include<climits>
using namespace std;
int main(){
    // better than bubble sort 
    // stable sorting algo
    // Time complexity : 
            //   best : O(n)
            // worst and avg ;O(n^2)
 
    int arr[]={5,3,1,2,4};
    int n=5;

//    insertion sort 
        // start from the second element
        // compare the element with the element before it
        // shift the element to the right untill the correct postn for the current element is found
        // insert the element
        
    for(int i =1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}