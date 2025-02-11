#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums = {1,7,3,6,5,6};
    for(int i =1; i<nums.size() ; i++){
        int leftSum =0 ;
        int j = 0 ;
        while(j<i){
            leftSum+=nums[j];
            j++;
        }
        int rightSum = 0 ;
        j=i+1;
        while (j<nums.size())
        {
            rightSum+=nums[j];
            j++;
        } 
        if(rightSum==leftSum){
            cout<<i;
            break;
        }
        
    }
    return 0;
}