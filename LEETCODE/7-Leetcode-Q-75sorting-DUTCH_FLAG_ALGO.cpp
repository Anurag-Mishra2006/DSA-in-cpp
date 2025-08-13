/*
The goal is to sort an array containing three distinct values
##################Steps.............
Initialize lo to 0, mid to 0, and hi to the last index of the array.
Iterate through the array using the mid pointer:
If nums[mid] is 0, swap it with nums[lo], increment both lo and mid.
If nums[mid] is 1, just increment mid.
If nums[mid] is 2, swap it with nums[hi] and decrement hi. Do not increment mid because we need to check the new value at this position.
Continue until mid exceeds hi.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0;          // Pointer for next position of 0
        int mid = 0;         // Current element pointer
        int hi = nums.size() - 1; // Pointer for next position of 2

        while (mid <= hi) {
            if (nums[mid] == 0) {
                swap(nums[lo], nums[mid]);
                lo++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[hi]);
                hi--;
            }
        }
    }
};

int main() {
    Solution solution;
    vector<int> colors = {2, 0, 2, 1, 1, 0}; // Example input
    solution.sortColors(colors);

    cout << "Sorted colors: ";
    for (int color : colors) {
        cout << color << " ";
    }
    cout << endl;

    return 0;
}