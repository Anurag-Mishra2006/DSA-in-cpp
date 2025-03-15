/*  Given an array of integers heights 
representing the histogram's bar height 
where the width of each bar is 1, 
return the area of the largest rectangle in the histogram.
*/


/* Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
*/
#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& arr) {
    int n = arr.size(),maxarea = 0;
    int nsi[n];
    stack<int>st;
    nsi[n-1] = n;
    st.push(n-1);
    //  nsi
    for(int i = n-2; i>=0; i--){
        while(st.size()>0&& arr[st.top()]>= arr[i])st.pop();
        if(st.size()==0)nsi[i] = n;
        else nsi[i]= st.top();
        st.push(i);
    }
    //  psi
    int psi[n];
    stack<int>gt;
    gt.push(0);
    psi[0] = -1;
    for(int i = 1  ; i<n; i++){
        while(gt.size()>0 && arr[gt.top()]>=arr[i])gt.pop();
        if(gt.size()==0)psi[i] = -1;
        else psi[i]= gt.top();
        gt.push(i);
    } 
    for(int i =0 ;i<n; i++){
        int breadth = nsi[i] - psi[i] - 1;
        int area = arr[i] * breadth;
        maxarea = max(area,maxarea); 
    }
    return maxarea;
            
}

int main() {
    vector<int>a = {2,1,5,6,2,3};
    cout<<largestRectangleArea(a);
    return 0;
}