// First negative number in every window of size of k
// arr [] = {2,-3,4,4,-7,-1,4,-2,6} k = 3;
// ans  =   {-3,-3,-7,-7,-1, 2} --> n-k+1
// Optimise way
// sliding window
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i ;
    vector<int>arr = {2,3,4,4,-7,-1,4,-2,6};
    vector<int>ans;
    int k =2,  p=-1;

    for( i = 0; i<k;i++){
        if(arr[i]<0){
            p = i;
            break;
        }
    }
    if(p ==-1)ans.push_back(1);
    else ans.push_back(arr[p]);

    while(i<arr.size()-1){
        if(p>=i){
            ans.push_back(arr[p]);
            
        }
        else{
            p=-1;
            for(i = i; i<i+k; i++){
                if(arr[i]<0){
                    p = i;
                    break;
                }
            }
            
            if(p != -1)ans.push_back(arr[p]);  
            else ans.push_back(1);
        }
        i++;
        k++;
    }
    for(int i = 0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}