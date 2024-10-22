#include<iostream>
#include<climits>
using namespace std;
int main(){
    // selection  sort is used when we want the smallest element firstly
    // isme ham first element ko select karenge if it is the smallest then no swapping otherwise we swap it with the smallest number from the remaining element

    // when there is cost for swapping selection sort is consider as better than bubble sort
    int arr[]={5,3,1,2,4};
    int n=5;

    // Selection Sort
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        // Minimum element calculation in orange box
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);

    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}