#include<bits/stdc++.h>
using namespace std;
// store in sorted order and unique elements
void explainSet(){
    set<int>st;
    st.insert(2); // {2}
    st.emplace(5); // {2 ,5}
    st.insert(2); //  {2 ,5}
    st.insert(8);//  {2 ,5,8}
    st.insert(3);//  {2,3 ,5,8 }

    // Functionality of insert in vector
    //  can be used also , that only increase efficiency 

    //  begin() , end(), rbegin(), rend() , size() , empty() , and swap() are same as those of vector

    // auto it = st.find(3); // if 3 is present in the vector then it return 1 and otherwise 0
    
    // auto it = st.find(6);

    st.erase(5); // erase 5 // take TC = O(logn)

    // int cnt = st.count(2);
    // auto it = st.find(3);
}

int main(){
    explainSet();
}