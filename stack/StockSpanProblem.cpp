#include <bits/stdc++.h>
using namespace std;

vector<int>StockSpan(vector<int>nums){
    stack<int>st;
    stack<int>gt;
    vector<int>ans(nums.size());
    st.push(nums[0]);
    ans[0]=1;
    for(int i = 0; i<nums.size(); i++){
        int count=1;
        while(st.size() !=0 && nums[i]>st.top() ){
            count++;
            gt.push(nums[i]);
            st.pop();
        }
        while(gt.size()>0){
            st.push(gt.top());
            gt.pop();
        }
        st.push(nums[i]);
        ans[i]= count; 
    }
    return ans;
}


vector<int>OptimisedWay(vector<int>nums){
    stack<int>st;
    //  POP 
    //  ANS
    // PUSH
    vector<int>ans(nums.size());
    st.push(0);
    ans[0]= 1;
    for(int i = 1; i<nums.size(); i++){
        // pop all the elements smaller and equal to arr[i]
        while(st.size()>0 &&nums[st.top()]<=nums[i])st.pop();
        //  Mark the ans in ans array
        if(st.size()==0)ans[i]=-1;
        
        else ans[i] = st.top();
        ans[i] = i - ans[i];
        st.push(i);

    }
    return ans;
}

int main() {
    vector<int>a = {100,80,60,80,70,60,75,85};
    // vector<int>result=StockSpan(a);
    vector<int>result=OptimisedWay(a);
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}