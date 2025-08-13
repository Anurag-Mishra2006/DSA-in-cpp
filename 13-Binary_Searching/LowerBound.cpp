
#include <bits/stdc++.h>
using namespace std;
// Lower bound -> smallest index such that arr[i] >= x;

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {15, 20, 30, 45, 50};
    int n = 5, x = 25;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "and number is : "<<arr[ind]<<"\n";
    //  Floor --> largest number  in array <= x 
//  Ceil  --> smallest number in array >= x
    cout<<"Ceil : "<< arr[ind]<<endl;
    return 0;
}
