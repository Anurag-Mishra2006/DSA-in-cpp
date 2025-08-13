#include <bits/stdc++.h>
using namespace std;

// Brute force =>sort the given array, it result to the same element come together in cluster,
//  start from 1 idx and move by i + 3, and check if (nums[i] != nums[i-1]) return nums[i-1]
//  if it not found it  means the sigle number  at last index so return nums[n-1];

int findSingleNum2(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 1; i < n; i = i + 3)
    {
        if (nums[i] != nums[i - 1])
            return nums[i - 1];
    }
    return nums[n - 1];
}

//  The Optimal Approach => Concept of Bucket
// Here two buckets needed : ones and twos
//  nums[i] will go ones, if not in two   => (ones ^ nums[i]) & (~two)
//  nums[i] will go twos, if it is not in ones => (twos^ nums[i])& (~one)

int findSingle2Optimal(vector<int> &nums)
{
    int ones = 0;
    int twos = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ones = (ones ^ nums[i]) & (~twos);
        twos = (twos ^ nums[i]) & (~ones);
    }
    return ones;
}

int main()
{

    vector<int> nums = {1, 2, 3, 1, 2, 4, 5, 3, 2, 1, 3, 5, 5};
    cout << findSingleNum2(nums) << endl
         << endl;
    return 0;
}