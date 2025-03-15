//  you will be given an array and we have to return an array having elements which is the next greater than it
//  like        arr = [3,1,2,5,4,6,2,3]
    //          ans = [5,2,5,6,6,-1,3,-1]

#include <bits/stdc++.h>
using namespace std;

vector <int> bruteForce(vector<int>nums){
    for(int i =0; i<nums.size(); i++){
        int greaterElement = -1;
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i]<nums[j]){
                greaterElement = nums[j];
                break;
            }
            
        }
        nums[i] = greaterElement;
    }
    return nums;
}

//  using stack
vector<int>OptimisedWay(vector<int>nums){
    stack<int>st;
    //  POP 
    //  ANS
    // PUSH
    vector<int>ans(nums.size());
    st.push(nums[nums.size()-1]);
    ans[nums.size()-1]= -1;
    for(int i = nums.size()-2 ; i>=0; i--){
        // pop all the elements smaller and equal to arr[i]
        while(st.size()>0 && st.top()<=nums[i])st.pop();
        if(st.size()==0){
            ans[i]=-1;
        }
        else ans[i] = st.top();
        st.push(nums[i]);

    }
    return ans;
}


void display(vector<int>a){
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int>arr={3,1,2,5,4,6,2,3};
    vector<int>ans;
    display(arr);
    // ans = bruteForce(arr); 
    ans = OptimisedWay(arr);
    display(ans);  
    return 0;
}